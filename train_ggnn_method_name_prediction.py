import argparse
import random

import pickle

import tensorflow as tf
from utils.data.method_name_prediction_dataset import MethodNamePredictionData
from utils.utils import ThreadedIterator
from utils.dense_ggnn_method_name_prediction import DenseGGNNModel
import os
import sys
import re

from bidict import bidict
import copy
import numpy as np
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score
from utils import evaluation
from scipy.spatial import distance

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
parser.add_argument('--epochs', type=int, default=1000,
                    help='number of epochs to train for')
parser.add_argument('--lr', type=float, default=0.001, help='learning rate')
parser.add_argument('--cuda', default="0", type=str, help='enables cuda')
parser.add_argument('--verbal', type=bool, default=True,
                    help='print training info or not')
parser.add_argument('--manualSeed', type=int, help='manual seed')
parser.add_argument('--model_path', default="model",
                    help='path to save the model')
parser.add_argument('--model_accuracy_path', default="model_accuracy/method_name.txt",
                    help='path to save the the best accuracy of the model')
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
parser.add_argument('--train_path', default="sample_data/java-small-graph-transformed/training",
                    help='path of training data')
parser.add_argument('--val_path', default="sample_data/java-small-graph-transformed/validation",
                    help='path of validation data')
# parser.add_argument('--pretrained_embeddings_url', default="embedding/fast_pretrained_vectors.pkl", help='pretrained embeddings url, there are 2 objects in this file, the first object is the embedding matrix, the other is the lookup dictionary')

opt = parser.parse_args()
os.environ['CUDA_VISIBLE_DEVICES'] = opt.cuda

print(opt)

# opt.model_path = os.path.join(opt.model_path,)
# opt.model_path = os.path.join(opt.model_path,"method_name_prediction" + "_aggregation_" + str(opt.aggregation) + "_distributed_function_" + str(opt.distributed_function) + "_hidden_layer_size_" + str(opt.hidden_layer_size) + "_num_hidden_layer_"  + str(opt.num_hidden_layer) + "_node_type_dim_" + str(opt.node_type_dim) + "_node_token_dim_" + str(opt.node_token_dim))

def form_model_path(opt):
    model_traits = {}
    model_traits["aggregation"] = str(opt.aggregation)
    model_traits["distributed_function"] = str(opt.distributed_function)
    model_traits["node_type_dim"] = str(opt.node_type_dim)
    model_traits["node_token_dim"] = str(opt.node_token_dim)
    
    model_path = []
    for k, v in model_traits.items():
        model_path.append(k + "_" + v)
    
    return os.path.join(opt.model_path,"method_name_prediction" + "_" + "-".join(model_path))

def main(opt):

    train_label_lookup = {}
 
    node_type_lookup = {}
    node_token_lookup = {}

    val_label_lookup = {}
   
    node_type_vocabulary_path = "preprocessed_data/node_type_vocab.txt"

    train_label_vocabulary_path = "preprocessed_data/train_label_vocab.txt"
    token_vocabulary_path = "preprocessed_data/token_vocab.txt"

    val_label_vocabulary_path = "preprocessed_data/val_label_vocab.txt"

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

    opt.model_path = form_model_path(opt)
    checkfile = os.path.join(opt.model_path, 'cnn_tree.ckpt')
    ckpt = tf.train.get_checkpoint_state(opt.model_path)
    if ckpt and ckpt.model_checkpoint_path:
        print("Continue training with old model")

    # print(train_label_lookup)
    opt.label_lookup = train_label_lookup
    opt.num_labels = len(train_label_lookup.keys())
    opt.node_type_lookup = node_type_lookup
    opt.node_token_lookup = node_token_lookup
    # opt.training_path = "sample_data/java-small-graph-transformed/training"

    train_dataset = MethodNamePredictionData(opt, opt.train_path, True, False, False)
    opt.n_edge_types = train_dataset.n_edge_types

    val_opt = copy.deepcopy(opt)
    # val_opt.path = "sample_data/java-small-graph-transformed/validation"
    val_opt.label_lookup = val_label_lookup
    val_opt.num_labels = len(val_label_lookup.keys())
    val_opt.node_token_lookup = node_token_lookup
    validation_dataset = MethodNamePredictionData(val_opt, opt.val_path, False, False, True)

    ggnn = DenseGGNNModel(opt)

    # For debugging purpose
    nodes_representation = ggnn.nodes_representation
    graph_representation = ggnn.graph_representation
    logits = ggnn.logits
    label_embeddings = ggnn.label_embeddings
    # node_token_representations = ggnn.node_token_representations
    # # node_type_representations = ggnn.node_type_representations
    softmax_values = ggnn.softmax_values
    attention_scores = ggnn.attention_scores
    loss_node = ggnn.loss

    optimizer = tf.train.AdamOptimizer(opt.lr)
    training_point = optimizer.minimize(loss_node)

    saver = tf.train.Saver(save_relative_paths=True, max_to_keep=5)
    init = tf.global_variables_initializer()
    # train_batch_iterator = ThreadedIterator(train_dataset.make_minibatch_iterator(), max_queue_size=1)
    # for train_step, train_batch_data in enumerate(train_batch_iterator):
    #     print(train_batch_data['adjacency_matrix'].shape)
    

    best_f1_score = 0.0
    if not os.path.exists(opt.model_accuracy_path):
        try:
            os.mkdir("model_accuracy")
        except Exception as e:
            print(e)
    else:
        with open(opt.model_accuracy_path,"r") as f:
            data = f.readlines()
            for line in data:
                best_f1_score = float(line.replace("\n",""))
    
    print("Best f1 score : " + str(best_f1_score))
    with tf.Session() as sess:
        sess.run(init)

        if ckpt and ckpt.model_checkpoint_path:
            print("Continue training with old model")
            print("Checkpoint path : " + str(ckpt.model_checkpoint_path))
            saver.restore(sess, ckpt.model_checkpoint_path)
            for i, var in enumerate(saver._var_list):
                print('Var {}: {}'.format(i, var))

        average_f1 = 0.0
        label_embeddings_matrix = None
        for epoch in range(1,  opt.epochs + 1):
            train_batch_iterator = ThreadedIterator(
                train_dataset.make_minibatch_iterator(), max_queue_size=1)
            for train_step, train_batch_data in enumerate(train_batch_iterator):
             
                _, err, label_embeddings_matrix = sess.run(
                    [training_point, loss_node, label_embeddings],
                    feed_dict={
                        ggnn.placeholders["num_vertices"]: train_batch_data["num_vertices"],
                        ggnn.placeholders["adjacency_matrix"]:  train_batch_data['adjacency_matrix'],
                        ggnn.placeholders["labels"]:  train_batch_data['labels'],
                        ggnn.placeholders["node_type_indices"]: train_batch_data["node_type_indices"],
                        ggnn.placeholders["node_token_indices"]: train_batch_data["node_token_indices"],
                        ggnn.placeholders["graph_state_keep_prob"]: 0.5,
                        ggnn.placeholders["edge_weight_dropout_keep_prob"]: 0.5
                    }
                )
                print("Epoch:", epoch, "Step:", train_step, "Loss:", err, "Current F1:", average_f1, "Best F1:", best_f1_score)

                # print(label_embeddings_matrix.shape)
                

                # if train_step % opt.checkpoint_every == 0 and train_step > 0:
                #     saver.save(sess, checkfile)                  
                #     print('Checkpoint saved, epoch:' + str(epoch) + ', step: ' + str(train_step) + ', loss: ' + str(err) + '.')

            # --------------------------------------
            # if opt.validating == 0:
            #     if train_step % opt.checkpoint_every == 0 and train_step > 0:
            #         saver.save(sess, checkfile)                  
            #         print('Checkpoint saved, epoch:' + str(epoch) + ', step: ' + str(train_step) + ', loss: ' + str(err) + '.')
            if opt.validating == 1:
                print("Validating after epoch:", epoch)
                # predictions = []
                validation_batch_iterator = ThreadedIterator(
                    validation_dataset.make_minibatch_iterator(), max_queue_size=5)
                
                f1_scores_of_val_data = []
                for _, val_batch_data in enumerate(validation_batch_iterator):

                    code_vectors = sess.run(
                        [graph_representation],
                        feed_dict={
                            ggnn.placeholders["num_vertices"]: val_batch_data["num_vertices"],
                            ggnn.placeholders["adjacency_matrix"]:  val_batch_data['adjacency_matrix'],
                            ggnn.placeholders["node_type_indices"]: val_batch_data["node_type_indices"],
                            ggnn.placeholders["node_token_indices"]: val_batch_data["node_token_indices"],
                            ggnn.placeholders["graph_state_keep_prob"]: 1.0,
                            ggnn.placeholders["edge_weight_dropout_keep_prob"]: 1.0
                        }
                    )

                    # print(code_vectors[0].shape)
                    
                    # for code_vector in code_vectors[0]:
                    # code_vector = np.reshape(code_vector,(-1, code_vectors[0].shape[1]))
                    distance_matrix = distance.cdist(code_vectors[0], label_embeddings_matrix, metric='cosine')  
                    predictions = np.argmax(distance_matrix, axis=1)
                   
                    ground_truths = np.argmax(val_batch_data['labels'], axis=1)
                   
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
                    print("F1 of this step : " + str(f1_score))
                    f1_scores_of_val_data.append(f1_score)
                average_f1 = np.mean(f1_scores_of_val_data)
                # print("F1 score : " + str(f1_score))
                print("Validation with F1 score ", average_f1)
                if average_f1 > best_f1_score:
                    best_f1_score = average_f1
                    saver.save(sess, checkfile)                  
                    print('Checkpoint saved, epoch:' + str(epoch) + ', step: ' + str(train_step) + ', loss: ' + str(err) + '.')
                    with open(opt.model_accuracy_path,"w") as f1:
                        f1.write(str(best_f1_score))


if __name__ == "__main__":
    main(opt)
