import argparse
import random

import pickle

import tensorflow as tf
from utils.data.dataset import MonoLanguageProgramData
from utils.utils import ThreadedIterator
from utils.dense_ggnn import DenseGGNNModel
import os
import sys

import numpy as np
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score

parser = argparse.ArgumentParser()
parser.add_argument('--workers', type=int, help='number of data loading workers', default=2)
parser.add_argument('--train_batch_size', type=int, default=12, help='input batch size')
parser.add_argument('--test_batch_size', type=int, default=5, help='input batch size')
parser.add_argument('--state_dim', type=int, default=30, help='GGNN hidden state dimension size')
parser.add_argument('--node_dim', type=int, default=100, help='node dimension size')
parser.add_argument('--hidden_layer_size', type=int, default=100, help='size of hidden layer')
parser.add_argument('--num_hidden_layer', type=int, default=1, help='number of hidden layer')
parser.add_argument('--n_steps', type=int, default=10, help='propogation steps number of GGNN')
parser.add_argument('--epochs', type=int, default=500, help='number of epochs to train for')
parser.add_argument('--lr', type=float, default=0.001, help='learning rate')
parser.add_argument('--cuda', default="0",type=str, help='enables cuda')
parser.add_argument('--verbal', type=bool, default=True, help='print training info or not')
parser.add_argument('--manualSeed', type=int, help='manual seed')
parser.add_argument('--n_classes', type=int, default=10, help='manual seed')
parser.add_argument('--path', default="program_data/github_java_sort_function_babi", help='program data')
parser.add_argument('--model_path', default="model", help='path to save the model')
parser.add_argument('--n_hidden', type=int, default=50, help='number of hidden layers')
parser.add_argument('--size_vocabulary', type=int, default=59, help='maximum number of node types')
parser.add_argument('--training_percentage', type=float, default=1.0 ,help='percentage of data use for training')
parser.add_argument('--log_path', default="logs/" ,help='log path for tensorboard')
parser.add_argument('--checkpoint_every', type=int, default=100 ,help='check point to save model')
parser.add_argument('--best_accuracy', type=float, default=0.0 ,help='best accuracy to save model')
parser.add_argument('--aggregation', type=int, default=1, choices=range(0,4), help='0 for max pooling, 1 for attention with sum pooling, 2 for attention with max pooling, 3 for attention with average pooling')
parser.add_argument('--distributed_function', type=int, default=0, choices=range(0,2), help='0 for softmax, 1 for sigmoid')
parser.add_argument('--pretrained_embeddings_url', default="embedding/fast_pretrained_vectors.pkl", help='pretrained embeddings url, there are 2 objects in this file, the first object is the embedding matrix, the other is the lookup dictionary')

opt = parser.parse_args()
os.environ['CUDA_VISIBLE_DEVICES'] = opt.cuda

print(opt)

# opt.model_path = os.path.join(opt.model_path,"sum_softmax" + "_hidden_layer_size_" + str(opt.hidden_layer_size) + "_num_hidden_layer_"  + str(opt.num_hidden_layer)) + "_node_dim_" + str(opt.node_dim)

def main(opt):
    with open(opt.pretrained_embeddings_url, 'rb') as fh:
        embeddings, embed_lookup = pickle.load(fh,encoding='latin1')

        opt.pretrained_embeddings = embeddings
        opt.pretrained_embed_lookup = embed_lookup

    
    checkfile = os.path.join(opt.model_path, 'cnn_tree.ckpt')   
    ckpt = tf.train.get_checkpoint_state(opt.model_path)
    
    train_dataset = MonoLanguageProgramData(opt, True, False)
    test_dataset = MonoLanguageProgramData(opt, False, True)

    opt.n_edge_types = train_dataset.n_edge_types

    ggnn = DenseGGNNModel(opt)

    # For debugging purpose
    nodes_representation = ggnn.nodes_representation
    graph_representation = ggnn.graph_representation
    logits = ggnn.logits
    softmax_values = ggnn.softmax_values
    attention_scores = ggnn.attention_scores

    loss_node = ggnn.loss

    optimizer = tf.train.AdamOptimizer(opt.lr)
    training_point = optimizer.minimize(loss_node)

    saver = tf.train.Saver(save_relative_paths=True, max_to_keep=5)
    init = tf.global_variables_initializer()
    # with open("model_selection.txt","r") as f:

    with tf.Session() as sess:
        sess.run(init)

        print("List of available devices..........")
        print(tf.test.gpu_device_name())

        if ckpt and ckpt.model_checkpoint_path:
            print("Continue training with old model")
            print("Checkpoint path : " + str(ckpt.model_checkpoint_path))
            saver.restore(sess, ckpt.model_checkpoint_path)
            for i, var in enumerate(saver._var_list):
                print('Var {}: {}'.format(i, var))

        best_accuracy = opt.best_accuracy
        for epoch in range(1,  opt.epochs + 1):
            train_batch_iterator = ThreadedIterator(train_dataset.make_minibatch_iterator(), max_queue_size=5)


            for train_step, train_batch_data in enumerate(train_batch_iterator):
                # print(batch_data["labels"])

                _ , err, softmax_values_data, attention_scores_data = sess.run(
                    [training_point, loss_node, softmax_values, attention_scores],
                    feed_dict={
                        ggnn.placeholders["initial_node_representation"]: train_batch_data["initial_representations"],
                        ggnn.placeholders["num_vertices"]: train_batch_data["num_vertices"],
                        ggnn.placeholders["adjacency_matrix"]:  train_batch_data['adjacency_matrix'],
                        ggnn.placeholders["labels"]:  train_batch_data['labels']
                    }
                )

                print("Epoch:", epoch, "Step:",train_step,"Loss:", err, "Best Accuracy:", best_accuracy)

                if train_step % opt.checkpoint_every == 0:
                    
                    # saver.save(sess, checkfile)                  
                    # print('Checkpoint saved, epoch:' + str(epoch) + ', step: ' + str(step) + ', loss: ' + str(err) + '.')



                    # Validating
                    #--------------------------------------
                    print("Validating.......")
                    correct_labels = []
                    predictions = []
                    test_batch_iterator = ThreadedIterator(test_dataset.make_minibatch_iterator(), max_queue_size=5)
                   
                    for test_step, test_batch_data in enumerate(test_batch_iterator):
                        

                        softmax_values_data = sess.run(
                            [softmax_values],
                            feed_dict={
                                ggnn.placeholders["initial_node_representation"]: test_batch_data["initial_representations"],
                                ggnn.placeholders["num_vertices"]: test_batch_data["num_vertices"],
                                ggnn.placeholders["adjacency_matrix"]:  test_batch_data['adjacency_matrix'],
                                ggnn.placeholders["labels"]:  test_batch_data['labels']
                            }
                        )
                        correct_labels.extend(np.argmax(test_batch_data['labels'],axis=1))
                        predictions.extend(np.argmax(softmax_values_data[0],axis=1))

                    print("Num target : " + str(len(correct_labels)))
                    print(correct_labels)
                    print(predictions)
                    target_names = [str(i) for i in range(1,11)]
                    accuracy = float(accuracy_score(correct_labels, predictions))
                    print('Accuracy:', accuracy)
                    print(classification_report(correct_labels, predictions, target_names=target_names))
                    print(confusion_matrix(correct_labels, predictions))

                    if accuracy > best_accuracy:
                        best_accuracy = accuracy
                        saver.save(sess, checkfile)                  
                        print('Checkpoint saved, epoch:' + str(epoch) + ', step: ' + str(train_step) + ', loss: ' + str(err) + '.')
           

    # print(train_dataset.bucketed)
  

    
if __name__ == "__main__":
    main(opt)

