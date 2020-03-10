import argparse
import random

import pickle

import tensorflow as tf
from utils.data.tree_method_name_prediction_dataset import MethodNamePredictionData
from utils.utils import ThreadedIterator
# from utils.network.dense_ggnn_method_name_prediction import DenseGGNNModel
from utils.network.treecaps_2 import TreeCapsModel
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
from keras_radam.training import RAdamOptimizer

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
parser.add_argument('--tree_size_threshold_upper', type=int,
                    default=1000, help='tree size threshold')
parser.add_argument('--tree_size_threshold_lower', type=int,
                    default=30, help='tree size threshold')                   
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
parser.add_argument('--val_path', default="sample_data/java-small-pkl/validation",
                    help='path of validation data')
parser.add_argument('--dataset', default="java-small",
                    help='name of dataset')
parser.add_argument('--node_type_vocabulary_path', default="preprocessed_data/node_type_vocab.txt",
                    help='name of dataset')
parser.add_argument('--token_vocabulary_path', default="preprocessed_data/treecaps/java-small/token_vocab.txt",
                    help='name of dataset')
parser.add_argument('--train_label_vocabulary_path', default="preprocessed_data/treecaps/java-small/train_label_vocab.txt",
                    help='name of dataset')
parser.add_argument('--val_label_vocabulary_path', default="preprocessed_data/treecaps/java-small/val_label_vocab.txt",
                    help='name of dataset')
parser.add_argument('--task', type=int, default=0,
                    choices=range(0, 2), help='0 for training, 1 for testing')
parser.add_argument('--num_files_threshold', type=int, default=20000)
parser.add_argument('--top_a', type=int, default=10)
parser.add_argument('--num_conv', type=int, default=8)
parser.add_argument('--output_size', type=int, default=16)
parser.add_argument('--num_channel', type=int, default=8)
parser.add_argument('--num_channel_dynamic_routing', type=int, default=8)

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
    model_traits["node_type_dim"] = str(opt.node_type_dim)
    model_traits["node_token_dim"] = str(opt.node_token_dim)
    model_traits["output_size"] = str(opt.output_size)
    # model_traits["top_a"] = str(opt.top_a)
    # model_traits["num_channel"] = str(opt.num_channel)
    model_traits["num_channel_dynamic_routing"] = str(opt.num_channel_dynamic_routing)
    model_traits["num_conv"] = str(opt.num_conv)
    model_traits["sub_token_aggregation"] = "reduce-sum"
    model_traits["version"] = "direct-routing"
    
    
    model_path = []
    for k, v in model_traits.items():
        model_path.append(k + "_" + v)
    
    return "tree_caps_method_name_prediction" + "_" + "-".join(model_path)

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

    print("Loading vocabs.........")
    train_label_lookup, node_type_lookup, node_token_lookup, val_label_lookup = load_vocabs(opt)

    opt.label_lookup = train_label_lookup
    opt.label_size = len(train_label_lookup.keys())
    opt.node_type_lookup = node_type_lookup
    opt.node_token_lookup = node_token_lookup

    if opt.task == 1:
        train_dataset = MethodNamePredictionData(opt, opt.train_path, True, False, False)
    
    val_opt = copy.deepcopy(opt)
    val_opt.label_lookup = val_label_lookup
    val_opt.num_labels = len(val_label_lookup.keys())
    val_opt.node_token_lookup = node_token_lookup
    validation_dataset = MethodNamePredictionData(val_opt, opt.val_path, False, False, True)

    print("Initializing tree caps model...........")
    treecaps = TreeCapsModel(opt)
    # network.init_net_treecaps(30,30)
    print("Finished initializing tree caps model...........")


    loss_node = treecaps.loss
    optimizer = RAdamOptimizer(opt.lr)

    update_ops = tf.get_collection(tf.GraphKeys.UPDATE_OPS)
    with tf.control_dependencies(update_ops):
        training_point = optimizer.minimize(loss_node)
    saver = tf.train.Saver(save_relative_paths=True, max_to_keep=5)
  
    init = tf.global_variables_initializer()

    best_f1_score = get_best_f1_score(opt)
    print("Best f1 score : " + str(best_f1_score))


    num_caps_top_a = int(opt.num_conv*opt.output_size/opt.num_channel)*opt.top_a
    with tf.Session() as sess:
        sess.run(init)
        if ckpt and ckpt.model_checkpoint_path:
            print("Continue training with old model")
            print("Checkpoint path : " + str(ckpt.model_checkpoint_path))
            saver.restore(sess, ckpt.model_checkpoint_path)
            for i, var in enumerate(saver._var_list):
                print('Var {}: {}'.format(i, var))

        average_f1 = 0.0
        if opt.task == 1:
            for epoch in range(1,  opt.epochs + 1):
                train_batch_iterator = ThreadedIterator(train_dataset.make_minibatch_iterator(), max_queue_size=1)
                for train_step, train_batch_data in enumerate(train_batch_iterator):
                    print("--------------------------")
                    # print("Epoch:", epoch, "Step:", train_step)
                    # print(train_step)
                    # print(train_batch_data["batch_node_types"].shape)
                    # print(train_batch_data["batch_node_tokens"].shape)
                    # print(train_batch_data["batch_children_indices"].shape)
                    # print(train_batch_data["batch_children_node_types"].shape)
                    # print(train_batch_data["batch_children_node_tokens"].shape)
                    # print(train_batch_data["batch_node_indexes"])
                    print(train_batch_data["batch_tree_size"])
                    max_nodes = train_batch_data["batch_node_types"].shape[1]
                    alpha_IJ_shape = (opt.batch_size, int(num_caps_top_a/opt.top_a*max_nodes), num_caps_top_a)
                    alpha_IJ = np.zeros(alpha_IJ_shape)

                
                    # delta_IJ_shape = (opt.batch_size, opt.output_size*max_nodes, num_outputs, 1, 1)
                    # alpha_IJ = np.zeros(alpha_IJ_shape)


                    _, err, logits_scores, code_caps_scores = sess.run(
                            [training_point, treecaps.loss, treecaps.logits, treecaps.code_caps],
                            feed_dict={
                                treecaps.placeholders["node_types"]: train_batch_data["batch_node_types"],
                                treecaps.placeholders["node_tokens"]:  train_batch_data["batch_node_tokens"],
                                treecaps.placeholders["children_indices"]:  train_batch_data["batch_children_indices"],
                                treecaps.placeholders["children_node_types"]: train_batch_data["batch_children_node_types"],
                                treecaps.placeholders["children_node_tokens"]: train_batch_data["batch_children_node_tokens"],
                                treecaps.placeholders["labels"]: train_batch_data["batch_labels"],
                                treecaps.placeholders["is_training"]: True
                            }
                        )
                    
                    # code_caps_scores = sess.run(
                    #         [treecaps.code_caps],
                    #         feed_dict={
                    #             treecaps.placeholders["node_types"]: train_batch_data["batch_node_types"],
                    #             treecaps.placeholders["node_tokens"]:  train_batch_data["batch_node_tokens"],
                    #             treecaps.placeholders["children_indices"]:  train_batch_data["batch_children_indices"],
                    #             treecaps.placeholders["children_node_types"]: train_batch_data["batch_children_node_types"],
                    #             treecaps.placeholders["children_node_tokens"]: train_batch_data["batch_children_node_tokens"],
                    #             treecaps.placeholders["labels"]: train_batch_data["batch_labels"],
                    #             treecaps.placeholders["w_dr_tile"]: w_dr_tile, 
                    #             treecaps.placeholders["is_training"]: True
                    #         }
                    #     )

                    # print(parent_node_type_embeddings_scores.shape)   
                    # print(parent_node_token_embeddings_scores.shape)
                    # print(children_node_types_tensor_scores.shape)    
                    # print(children_node_tokens_tensor_scores.shape)
                    # print(parent_node_embeddings_scores.shape)
                    # print(children_embeddings_scores.shape)
                    # print(len(conv_output_scores))
                    # print(conv_output_scores[0].shape)
                    # print(primary_variable_caps_scores.shape)
                    # print(primary_static_caps_scores.shape)
                    # print(logits_scores)
                    # print(code_caps_scores[0].shape)
                    print("Epoch:", epoch, "Step:", train_step, "Loss:", err, "Current F1:", average_f1, "Best F1:", best_f1_score)

                    if opt.validating == 0:
                        if train_step % opt.checkpoint_every == 0 and train_step > 0:
                            saver.save(sess, checkfile)                  
                            print('Checkpoint saved, epoch:' + str(epoch) + ', step: ' + str(train_step) + ', loss: ' + str(err) + '.')
                    
                    if opt.validating == 1:
                        if train_step % opt.checkpoint_every == 0 and train_step > 0:
                            print("Validating at epoch:", epoch)
                            # predictions = []
                            validation_batch_iterator = ThreadedIterator(
                                validation_dataset.make_minibatch_iterator(), max_queue_size=5)
                            
                            # f1_scores_of_val_data = []
                            all_predicted_labels = []
                            all_ground_truth_labels = []

                            for val_step, val_batch_data in enumerate(validation_batch_iterator):
                                
                                alpha_IJ_shape = (opt.batch_size, int(num_caps_top_a/opt.top_a*val_batch_data["batch_node_types"].shape[1]), num_caps_top_a)
                                alpha_IJ = np.zeros(alpha_IJ_shape)
                                
                                scores = sess.run(
                                    [treecaps.logits],
                                    feed_dict={
                                        treecaps.placeholders["node_types"]: val_batch_data["batch_node_types"],
                                        treecaps.placeholders["node_tokens"]:  val_batch_data["batch_node_tokens"],
                                        treecaps.placeholders["children_indices"]:  val_batch_data["batch_children_indices"],
                                        treecaps.placeholders["children_node_types"]: val_batch_data["batch_children_node_types"],
                                        treecaps.placeholders["children_node_tokens"]: val_batch_data["batch_children_node_tokens"],
                                        treecaps.placeholders["labels"]: val_batch_data["batch_labels"],
                                        treecaps.placeholders["alpha_IJ"]: alpha_IJ,
                                        treecaps.placeholders["is_training"]: False
                                    }
                                )
                                # print(scores[0])
                                
                                predictions = np.argmax(scores[0], axis=1)
                            
                                ground_truths = np.argmax(val_batch_data['batch_labels'], axis=1)
                            
                                predicted_labels = []
                                for prediction in predictions:
                                    predicted_labels.append(train_label_lookup.inverse[prediction])

                                ground_truth_labels = []
                                for ground_truth in ground_truths:
                                    ground_truth_labels.append(
                                        val_label_lookup.inverse[ground_truth])
                                
                                # print("Predicted : " + str(predicted_labels))
                                # print("Ground truth : " + str(ground_truth_labels))
                                f1_score = evaluation.calculate_f1_scores(predicted_labels, ground_truth_labels)
                                print(ground_truth_labels)
                                print(predicted_labels)
                                print("F1:", f1_score, "Step:", val_step)
                                all_predicted_labels.extend(predicted_labels)
                                all_ground_truth_labels.extend(ground_truth_labels)

                            average_f1 = evaluation.calculate_f1_scores(all_predicted_labels, all_ground_truth_labels)
                            # print("F1 score : " + str(f1_score))
                            print("Validation with F1 score ", average_f1)
                            if average_f1 > best_f1_score:
                                best_f1_score = average_f1

                                checkfile = os.path.join(opt.model_path, 'cnn_tree.ckpt')
                                saver.save(sess, checkfile)

                                checkfile = os.path.join(opt.model_path + "_" + str(datetime.utcnow().timestamp()), 'cnn_tree.ckpt')
                                saver.save(sess, checkfile)

                                print('Checkpoint saved, epoch:' + str(epoch) + ', loss: ' + str(err) + '.')
                                with open(opt.model_accuracy_path,"w") as f1:
                                    f1.write(str(best_f1_score))
        if opt.task == 0:
            validation_batch_iterator = ThreadedIterator(validation_dataset.make_minibatch_iterator(), max_queue_size=5)         
            # f1_scores_of_val_data = []
            all_predicted_labels = []
            all_ground_truth_labels = []

            for val_step, val_batch_data in enumerate(validation_batch_iterator):
                alpha_IJ_shape = (opt.batch_size, int(num_caps_top_a/opt.top_a*val_batch_data["batch_node_types"].shape[1]), num_caps_top_a)
                alpha_IJ = np.zeros(alpha_IJ_shape)
                            
                scores = sess.run(
                    [treecaps.logits],
                    feed_dict={
                        treecaps.placeholders["node_types"]: val_batch_data["batch_node_types"],
                        treecaps.placeholders["node_tokens"]:  val_batch_data["batch_node_tokens"],
                        treecaps.placeholders["children_indices"]:  val_batch_data["batch_children_indices"],
                        treecaps.placeholders["children_node_types"]: val_batch_data["batch_children_node_types"],
                        treecaps.placeholders["children_node_tokens"]: val_batch_data["batch_children_node_tokens"],
                        treecaps.placeholders["labels"]: val_batch_data["batch_labels"],
                        treecaps.placeholders["alpha_IJ"]: alpha_IJ,
                        treecaps.placeholders["is_training"]: False
                    }
                )
                # print(scores[0])
                
                print(scores[0].shape)
                print(val_batch_data['batch_labels'].shape)
                predictions = np.argmax(scores[0], axis=1)
            
                ground_truths = np.argmax(val_batch_data['batch_labels'], axis=1)
            
                predicted_labels = []
                for prediction in predictions:
                    predicted_labels.append(train_label_lookup.inverse[prediction])

                ground_truth_labels = []
                for ground_truth in ground_truths:
                    ground_truth_labels.append(
                        val_label_lookup.inverse[ground_truth])
                
                # print("Predicted : " + str(predicted_labels))
                # print("Ground truth : " + str(ground_truth_labels))
                f1_score = evaluation.calculate_f1_scores(predicted_labels, ground_truth_labels)
                print(ground_truth_labels)
                print(predicted_labels)
                print("F1:", f1_score, "Step:", val_step)
                all_predicted_labels.extend(predicted_labels)
                all_ground_truth_labels.extend(ground_truth_labels)

            average_f1 = evaluation.calculate_f1_scores(all_predicted_labels, all_ground_truth_labels)
            # print("F1 score : " + str(f1_score))
            print("Validation with F1 score ", average_f1)


if __name__ == "__main__":
    main(opt)
   