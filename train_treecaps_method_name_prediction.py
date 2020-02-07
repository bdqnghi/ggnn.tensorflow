import argparse
import random

import pickle

import tensorflow as tf
from utils.data.treecaps_method_name_prediction_dataset import MethodNamePredictionData
from utils.utils import ThreadedIterator
# from utils.network.dense_ggnn_method_name_prediction import DenseGGNNModel
from utils.network.treecaps import TreeCapsModel
# import utils.network.treecaps_2 as network
import os
import sys
import re
import time

from bidict import bidict
import copy
import numpy as np
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score
from utils import evaluation
from scipy.spatial import distance
from datetime import datetime

parser = argparse.ArgumentParser()
parser.add_argument('--workers', type=int,
                    help='number of data loading workers', default=2)
parser.add_argument('--batch_size', type=int,
                    default=5, help='input batch size')
parser.add_argument('--train_batch_size', type=int,
                    default=5, help='train input batch size')
parser.add_argument('--test_batch_size', type=int,
                    default=5, help='test input batch size')
parser.add_argument('--val_batch_size', type=int,
                    default=5, help='val input batch size')
parser.add_argument('--state_dim', type=int, default=30,
                    help='GGNN hidden state dimension size')
parser.add_argument('--node_type_dim', type=int, default=50,
                    help='node type dimension size')
parser.add_argument('--node_token_dim', type=int,
                    default=100, help='node token dimension size')
parser.add_argument('--hidden_layer_size', type=int,
                    default=100, help='size of hidden layer')
parser.add_argument('--num_hidden_layer', type=int,
                    default=1, help='number of hidden layer')
parser.add_argument('--n_steps', type=int, default=10,
                    help='propagation steps number of GGNN')
parser.add_argument('--n_edge_types', type=int, default=7,
                    help='number of edge types')
parser.add_argument('--epochs', type=int, default=1000,
                    help='number of epochs to train for')
parser.add_argument('--lr', type=float, default=0.001, help='learning rate')
parser.add_argument('--cuda', default="0", type=str, help='enables cuda')
parser.add_argument('--verbal', type=bool, default=True,
                    help='print training info or not')
parser.add_argument('--manualSeed', type=int, help='manual seed')
parser.add_argument('--model_path', default="model",
                    help='path to save the model')
# parser.add_argument('--model_accuracy_path', default="model_accuracy/method_name.txt",
#                     help='path to save the the best accuracy of the model')
parser.add_argument('--n_hidden', type=int, default=50,
                    help='number of hidden layers')
parser.add_argument('--log_path', default="logs/",
                    help='log path for tensorboard')
parser.add_argument('--checkpoint_every', type=int,
                    default=500, help='check point to save model')
parser.add_argument('--validating', type=int,
                    default=1, help='validating or not')
parser.add_argument('--graph_size_threshold', type=int,
                    default=1000, help='graph size threshold')
parser.add_argument('--sampling_size', type=int,
                    default=60, help='sampling size for each epoch')
parser.add_argument('--best_f1', type=float,
                    default=0.0, help='best f1 to save model')
parser.add_argument('--aggregation', type=int, default=1, choices=range(0, 4),
                    help='0 for max pooling, 1 for attention with sum pooling, 2 for attention with max pooling, 3 for attention with average pooling')
parser.add_argument('--distributed_function', type=int, default=0,
                    choices=range(0, 2), help='0 for softmax, 1 for sigmoid')
parser.add_argument('--train_path', default="sample_data/java-small-pkl/training",
                    help='path of training data')
parser.add_argument('--val_path', default="sample_data/java-small-graph-transformed/validation",
                    help='path of validation data')
parser.add_argument('--dataset', default="java-small",
                    help='name of dataset')
parser.add_argument('--node_type_vocabulary_path', default="preprocessed_data/node_type_vocab.txt",
                    help='name of dataset')
parser.add_argument('--token_vocabulary_path', default="preprocessed_data/java-small/token_vocab.txt",
                    help='name of dataset')
parser.add_argument('--train_label_vocabulary_path', default="preprocessed_data/java-small/train_label_vocab.txt",
                    help='name of dataset')
parser.add_argument('--val_label_vocabulary_path', default="preprocessed_data/java-small/val_label_vocab.txt",
                    help='name of dataset')
parser.add_argument('--task', type=int, default=0,
                    choices=range(0, 2), help='0 for training, 1 for testing')

opt = parser.parse_args()

os.environ['CUDA_VISIBLE_DEVICES'] = opt.cuda

# def train_model():

#     train_dataset = MethodNamePredictionData(opt, opt.train_path, True, False, False)

    # train_batch_iterator = ThreadedIterator(train_dataset.make_minibatch_iterator(), max_queue_size=10)
    # for train_step, train_batch_data in enumerate(train_batch_iterator):
    #     print("-------------------------------------")
    #     print(train_batch_data)

def form_model_path(opt):
    model_traits = {}
    model_traits["dataset"] = str(opt.dataset)
    model_traits["aggregation"] = str(opt.aggregation)
    model_traits["distributed_function"] = str(opt.distributed_function)
    model_traits["node_type_dim"] = str(opt.node_type_dim)
    model_traits["node_token_dim"] = str(opt.node_token_dim)
    
    model_path = []
    for k, v in model_traits.items():
        model_path.append(k + "_" + v)
    
    return "method_name_prediction" + "_" + "-".join(model_path)

def load_vocabs(opt):

    train_label_lookup = {}
    node_type_lookup = {}
    node_token_lookup = {}
    val_label_lookup = {}

    node_type_vocabulary_path = opt.node_type_vocabulary_path
    train_label_vocabulary_path = opt.train_label_vocabulary_path
    token_vocabulary_path = opt.token_vocabulary_path
    val_label_vocabulary_path = opt.val_label_vocabulary_path

    with open(train_label_vocabulary_path, "r") as f1:
        data = f1.readlines()
        for line in data:
            splits = line.replace("\n", "").split(",")
            train_label_lookup[splits[1]] = int(splits[0])

    with open(node_type_vocabulary_path, "r") as f2:
        data = f2.readlines()
        for line in data:
            splits = line.replace("\n", "").split(",")
            node_type_lookup[splits[1]] = int(splits[0])

    with open(token_vocabulary_path, "r") as f3:
        data = f3.readlines()
        for line in data:
            splits = line.replace("\n", "").split(",")
            node_token_lookup[splits[1]] = int(splits[0])

    with open(val_label_vocabulary_path, "r") as f4:
        data = f4.readlines()
        for line in data:
            splits = line.replace("\n", "").split(",")
            val_label_lookup[splits[1]] = int(splits[0])

    train_label_lookup = bidict(train_label_lookup)
    node_type_lookup = bidict(node_type_lookup)
    node_token_lookup = bidict(node_token_lookup)
    val_label_lookup = bidict(val_label_lookup)

    return train_label_lookup, node_type_lookup, node_token_lookup, val_label_lookup

def get_best_f1_score(opt):
    best_f1_score = 0.0
    
    try:
        os.mkdir("model_accuracy")
    except Exception as e:
        print(e)
    
    opt.model_accuracy_path = os.path.join("model_accuracy",form_model_path(opt) + ".txt")

    if os.path.exists(opt.model_accuracy_path):
        print("Model accuracy path exists : " + str(opt.model_accuracy_path))
        with open(opt.model_accuracy_path,"r") as f4:
            data = f4.readlines()
            for line in data:
                best_f1_score = float(line.replace("\n",""))
    else:
        print("Creating model accuracy path : " + str(opt.model_accuracy_path))
        with open(opt.model_accuracy_path,"w") as f5:
            f5.write("0.0")
    
    return best_f1_score


def main(opt):
    
    opt.model_path = os.path.join(opt.model_path, form_model_path(opt))
    checkfile = os.path.join(opt.model_path, 'cnn_tree.ckpt')
    ckpt = tf.train.get_checkpoint_state(opt.model_path)
    if ckpt and ckpt.model_checkpoint_path:
        print("Continue training with old model : " + str(checkfile))

    train_label_lookup, node_type_lookup, node_token_lookup, val_label_lookup = load_vocabs(opt)

    opt.label_lookup = train_label_lookup
    opt.num_labels = len(train_label_lookup.keys())
    opt.node_type_lookup = node_type_lookup
    opt.node_token_lookup = node_token_lookup

    treecaps = TreeCapsModel(opt)
    # network.init_net_treecaps(30,30)
    print("Finished initializing tree caps model...........")

    train_dataset = MethodNamePredictionData(opt, opt.train_path, True, False, False)


    train_batch_iterator = ThreadedIterator(train_dataset.make_minibatch_iterator(), max_queue_size=5)
    for train_step, train_batch_data in enumerate(train_batch_iterator):
        print("--------------------------")
        # print(train_step)
        # print(train_batch_data["batch_nodes"].shape)

if __name__ == "__main__":
    main(opt)
   