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
        self.node_dim = opt.node_dim
        self.hidden_layer_size = opt.hidden_layer_size
        self.num_hidden_layer = opt.num_hidden_layer
        self.aggregation_type = opt.aggregation
        self.distributed_function = opt.distributed_function
        self.num_labels = opt.n_classes
        self.num_edge_types = opt.n_edge_types
        self.num_timesteps= opt.n_steps
        self.placeholders = {}
        self.weights = {}

        self.prepare_specific_graph_model()
        self.nodes_representation = self.compute_nodes_representation()
        # self.graph_representation = self.pooling_layer(self.nodes_representation)

        graph_representation, attention_scores = self.aggregation_layer(self.nodes_representation, self.aggregation_type, self.distributed_function)

        self.graph_representation = graph_representation
        self.attention_scores = attention_scores
        
        if self.num_hidden_layer == 1:
            self.logits = self.hidden_layer(self.graph_representation, self.node_dim, self.num_labels)
        else:
            self.logits = self.hidden_layer(self.graph_representation, self.node_dim, self.hidden_layer_size)
            for i in range(1, self.num_hidden_layer):
                self.logits = self.hidden_layer(self.logits, self.hidden_layer_size, self.num_labels)

        self.loss = self.loss_layer(self.logits)
        self.softmax_values = self.softmax(self.logits)


    def prepare_specific_graph_model(self) -> None:
        node_dim = self.node_dim

        # initializer = tf.contrib.layers.xavier_initializer()
        # inputs
        # self.placeholders['graph_state_keep_prob'] = tf.placeholder(tf.float32, None, name='graph_state_keep_prob')
        # self.placeholders['edge_weight_dropout_keep_prob'] = tf.placeholder(tf.float32, None, name='edge_weight_dropout_keep_prob')
        self.placeholders['initial_node_representation'] = tf.placeholder(tf.float32, [None, None, self.node_dim], name='node_features')
        self.placeholders['num_vertices'] = tf.placeholder(tf.int32, (),  name='num_vertices')
        self.placeholders['labels'] = tf.placeholder(tf.int32, (None, self.num_labels))

        self.placeholders['adjacency_matrix'] = tf.placeholder(tf.float32,[None, self.num_edge_types, None, None], name='adjacency_matrix')     # [b, e, v, v]
        self.__adjacency_matrix = tf.transpose(self.placeholders['adjacency_matrix'], [1, 0, 2, 3])                    # [e, b, v, v]

        # weights
        self.weights['edge_weights'] = tf.Variable(glorot_init([self.num_edge_types, node_dim, node_dim]),name='edge_weights')
        self.weights['edge_biases'] = tf.Variable(glorot_init([self.num_edge_types, 1, node_dim]).astype(np.float32),name='edge_biases')
        
        self.xavier_initializer = tf.contrib.layers.xavier_initializer()
        # self.weights["hidden_layer_weights"] = tf.Variable(xavier_initializer([self.node_dim, self.num_labels]), name='hidden_layer_weights')
        # self.weights["hidden_layer_biases"] = tf.Variable(xavier_initializer([self.num_labels,]), name='hidden_layer_biases')

        self.weights['attention_weights'] = tf.Variable(glorot_init([self.node_dim,1]).astype(np.float32),name='attention_weights')
        

        with tf.variable_scope("gru_scope"):
            cell = tf.contrib.rnn.GRUCell(node_dim)
            # cell = tf.nn.rnn_cell.DropoutWrapper(cell, state_keep_prob=self.placeholders['graph_state_keep_prob'])
            self.weights['node_gru'] = cell

    def compute_nodes_representation(self):
        node_dim = self.node_dim
        v = self.placeholders['num_vertices']
        h = self.placeholders['initial_node_representation']                                                # [b, v, h]
        h = tf.reshape(h, [-1, node_dim])

        with tf.variable_scope("gru_scope") as scope:
            for i in range(self.num_timesteps):
                if i > 0:
                    tf.get_variable_scope().reuse_variables()
                for edge_type in range(self.num_edge_types):
                    # print("edge type : " + str(edge_type))
                    m = tf.matmul(h, self.weights['edge_weights'][edge_type])                               # [b*v, h]

                    m = tf.reshape(m, [-1, v, node_dim])                                                       # [b, v, h]
                    m += self.weights['edge_biases'][edge_type]                                             # [b, v, h]

                    if edge_type == 0:
                        acts = tf.matmul(self.__adjacency_matrix[edge_type], m)
                    else:
                        acts += tf.matmul(self.__adjacency_matrix[edge_type], m)
                acts = tf.reshape(acts, [-1, node_dim])                                                        # [b*v, h]

                h = self.weights['node_gru'](acts, h)[1]                                                    # [b*v, h]
            last_h = tf.reshape(h, [-1, v, node_dim])
        return last_h

    def pooling_layer(self, nodes_representation):
        """Creates a max dynamic pooling layer from the nodes."""
        with tf.name_scope("pooling"):
            pooled = tf.reduce_max(nodes_representation, axis=1)
            return pooled

    def hidden_layer(self, pooled, input_size, output_size):
        """Create a hidden feedforward layer."""
        # self.weights["hidden_layer_weights"] = tf.Variable(xavier_initializer([self.node_dim, self.num_labels]), name='hidden_layer_weights')
        # self.weights["hidden_layer_biases"] = tf.Variable(xavier_initializer([self.num_labels,]), name='hidden_layer_biases')

        with tf.name_scope("hidden"):
            weights = tf.Variable(self.xavier_initializer([input_size, output_size]))
            biases = tf.Variable(self.xavier_initializer([output_size,]))
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

    def aggregation_layer(self, nodes_representation, aggregation_type, distributed_function):
        # nodes_representation is (batch_size, max_graph_size, self.node_dim)
        w_attention = self.weights['attention_weights']
        with tf.name_scope("global_attention"):
            batch_size = tf.shape(nodes_representation)[0]
            max_tree_size = tf.shape(nodes_representation)[1]

            # (batch_size * max_graph_size, self.node_dim)
            flat_nodes_representation = tf.reshape(nodes_representation, [-1, self.node_dim])
            aggregated_vector = tf.matmul(flat_nodes_representation, w_attention)

            attention_score = tf.reshape(aggregated_vector, [-1, max_tree_size, 1])

            """A note here: softmax will distributed the weights to all of the nodes (sum of node weghts = 1),
            an interesting finding is that for some nodes, the attention score will be very very small, i.e e-12, 
            thus making parts of aggregated vector becomes near zero and affect on the learning (very slow nodes_representationergence
            - Better to use sigmoid"""

            if distributed_function == 0:
                attention_weights = tf.nn.softmax(attention_score, dim=1)
            if distributed_function == 1:
                attention_weights = tf.nn.sigmoid(attention_score)

            # TODO: reduce_max vs reduce_sum vs reduce_mean
            if aggregation_type == 1:
                print("Using tf.reduce_sum...........")
                weighted_average_nodes = tf.reduce_sum(tf.multiply(nodes_representation, attention_weights), axis=1)
            if aggregation_type == 2:
                print("Using tf.reduce_max...........")
                weighted_average_nodes = tf.reduce_max(tf.multiply(nodes_representation, attention_weights), axis=1)
            if aggregation_type == 3:
                print("Using tf.reduce_mean...........")
                weighted_average_nodes = tf.reduce_mean(tf.multiply(nodes_representation, attention_weights), axis=1)

            return weighted_average_nodes, attention_weights


    def softmax(self, logits_node):
        """Apply softmax to the output layer."""
        with tf.name_scope('output'):
            return tf.nn.softmax(logits_node)
