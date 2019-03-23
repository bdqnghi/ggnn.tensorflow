#!/usr/bin/env/python
"""
Usage:
    chem_tensorflow_dense.py [options]

Options:
    -h --help                Show this screen.
    --config-file FILE       Hyperparameter configuration file path (in JSON format)
    --config CONFIG          Hyperparameter configuration dictionary (in JSON format)
    --log_dir NAME           log dir name
    --data_dir NAME          data dir name
    --restore FILE           File to restore weights from.
    --freeze-graph-model     Freeze weights of graph model components.
    --evaluate               example evaluation mode using a restored model
"""

from typing import Sequence, Any
from docopt import docopt
from collections import defaultdict
import numpy as np
import tensorflow as tf
import sys, traceback
import pdb
import json

from utils.utils import glorot_init



'''
Comments provide the expected tensor shapes where helpful.

Key to symbols in comments:
---------------------------
[...]:  a tensor
; ; :   a list
b:      batch size
e:      number of edge types (4)
v:      number of vertices per graph in this batch
h:      GNN hidden size
'''

class DenseGGNNModel():
    def __init__(self, opt):
        self.h_dim = opt.state_dim
        self.num_labels = opt.n_classes
        self.num_edge_types = opt.n_edge_types
        self.num_timesteps= opt.n_steps
        self.placeholders = {}
        self.weights = {}

        self.prepare_specific_graph_model()
        self.nodes_representation = self.compute_nodes_representation()
        self.graph_representation = self.pooling_layer(self.nodes_representation)
        self.logits = self.hidden_layer(self.graph_representation, self.h_dim, self.num_labels)
        self.loss = self.loss_layer(self.logits)
        self.softmax_values = self.softmax(self.logits)


    def prepare_specific_graph_model(self) -> None:
        h_dim = self.h_dim

        # initializer = tf.contrib.layers.xavier_initializer()
        # inputs
        # self.placeholders['graph_state_keep_prob'] = tf.placeholder(tf.float32, None, name='graph_state_keep_prob')
        # self.placeholders['edge_weight_dropout_keep_prob'] = tf.placeholder(tf.float32, None, name='edge_weight_dropout_keep_prob')
        self.placeholders['initial_node_representation'] = tf.placeholder(tf.float32, [None, None, self.h_dim], name='node_features')
        self.placeholders['num_vertices'] = tf.placeholder(tf.int32, (),  name='num_vertices')
        self.placeholders['labels'] = tf.placeholder(tf.int32, (None, self.num_labels))

        self.placeholders['adjacency_matrix'] = tf.placeholder(tf.float32,[None, self.num_edge_types, None, None], name='adjacency_matrix')     # [b, e, v, v]
        self.__adjacency_matrix = tf.transpose(self.placeholders['adjacency_matrix'], [1, 0, 2, 3])                    # [e, b, v, v]

        # weights
        self.weights['edge_weights'] = tf.Variable(glorot_init([self.num_edge_types, h_dim, h_dim]),name='edge_weights')
        self.weights['edge_biases'] = tf.Variable(glorot_init([self.num_edge_types, 1, h_dim]).astype(np.float32),name='edge_biases')
        
        

        with tf.variable_scope("gru_scope"):
            cell = tf.contrib.rnn.GRUCell(h_dim)
            # cell = tf.nn.rnn_cell.DropoutWrapper(cell, state_keep_prob=self.placeholders['graph_state_keep_prob'])
            self.weights['node_gru'] = cell

    def compute_nodes_representation(self):
        h_dim = self.h_dim
        v = self.placeholders['num_vertices']
        h = self.placeholders['initial_node_representation']                                                # [b, v, h]
        h = tf.reshape(h, [-1, h_dim])

        with tf.variable_scope("gru_scope") as scope:
            for i in range(self.num_timesteps):
                if i > 0:
                    tf.get_variable_scope().reuse_variables()
                for edge_type in range(self.num_edge_types):
                    # print("edge type : " + str(edge_type))
                    m = tf.matmul(h, self.weights['edge_weights'][edge_type])                               # [b*v, h]

                    m = tf.reshape(m, [-1, v, h_dim])                                                       # [b, v, h]
                    m += self.weights['edge_biases'][edge_type]                                             # [b, v, h]

                    if edge_type == 0:
                        acts = tf.matmul(self.__adjacency_matrix[edge_type], m)
                    else:
                        acts += tf.matmul(self.__adjacency_matrix[edge_type], m)
                acts = tf.reshape(acts, [-1, h_dim])                                                        # [b*v, h]

                h = self.weights['node_gru'](acts, h)[1]                                                    # [b*v, h]
            last_h = tf.reshape(h, [-1, v, h_dim])
        return last_h

    def pooling_layer(self, nodes_representation):
        """Creates a max dynamic pooling layer from the nodes."""
        with tf.name_scope("pooling"):
            pooled = tf.reduce_max(nodes_representation, axis=1)
            return pooled

    def hidden_layer(self, pooled, input_size, output_size):
        """Create a hidden feedforward layer."""
        with tf.name_scope("hidden"):
            initializer = tf.contrib.layers.xavier_initializer()
            weights = tf.Variable(initializer([input_size, output_size]), name='weights')
            biases = tf.Variable(initializer([output_size,]), name='biases')
            return tf.nn.leaky_relu(tf.matmul(pooled, weights) + biases)

    def loss_layer(self, logits_node):
        """Create a loss layer for training."""
        labels = self.placeholders['labels']

        with tf.name_scope('loss_layer'):
            cross_entropy = tf.nn.softmax_cross_entropy_with_logits(
                labels=labels, logits=logits_node, name='cross_entropy'
            )

            loss = tf.reduce_mean(cross_entropy, name='cross_entropy_mean')
            return loss

    def softmax(self, logits_node):
        """Apply softmax to the output layer."""
        with tf.name_scope('output'):
            return tf.nn.softmax(logits_node)
