import argparse
import random

import pickle

import tensorflow as tf
from utils.data.treecaps_method_name_prediction_dataset import MethodNamePredictionData
from utils.utils import ThreadedIterator
# from utils.network.dense_ggnn_method_name_prediction import DenseGGNNModel
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
parser.add_argument('--train_batch_size', type=int, default=1, help='train batch size, always 1')
parser.add_argument('--test_batch_size', type=int, default=1, help='test batch size, always 1')
parser.add_argument('--niter', type=int, default=25, help='number of epochs to train for')
parser.add_argument('--lr', type=float, default=0.001, help='learning rate')
parser.add_argument('--verbal', type=bool, default=True, help='print training info or not')
parser.add_argument('--n_classes', type=int, default=10, help='manual seed')
parser.add_argument('--train_directory', default="Dataset_B/train", help='train program data') 
parser.add_argument('--test_directory', default="Dataset_B/test", help='test program data')
parser.add_argument('--model_path', default="Result_B_treecaps", help='path to save the model')
parser.add_argument('--training', action="store_true",help='is training')
parser.add_argument('--testing', action="store_true",help='is testing')
parser.add_argument('--training_percentage', type=float, default=1.0 ,help='percentage of data use for training')
parser.add_argument('--log_path', default="" ,help='log path for tensorboard')
parser.add_argument('--epoch', type=int, default=0, help='epoch to test')
parser.add_argument('--embeddings_directory', default="embedding/fast_pretrained_vectors.pkl")
parser.add_argument('--cuda', default="0",type=str, help='enables cuda')
parser.add_argument('--train_path', default="sample_data/java-small-pkl/training",help='path of training data')
parser.add_argument('--val_path', default="sample_data/java-small/validation",help='path of validation data')
parser.add_argument('--dataset', default="java-small",help='name of dataset')

opt = parser.parse_args()

os.environ['CUDA_VISIBLE_DEVICES'] = opt.cuda

if not os.path.isdir("cached"):
    os.mkdir("cached")


# def train_model():

#     train_dataset = MethodNamePredictionData(opt, opt.train_path, True, False, False)

    # train_batch_iterator = ThreadedIterator(train_dataset.make_minibatch_iterator(), max_queue_size=10)
    # for train_step, train_batch_data in enumerate(train_batch_iterator):
    #     print("-------------------------------------")
    #     print(train_batch_data)


def main(opt):
    
    train_dataset = MethodNamePredictionData(opt, opt.train_path, True, False, False)


    train_dataset.gen_samples()

if __name__ == "__main__":
    main(opt)
   