from typing import Sequence, Any
from collections import defaultdict
import numpy as np
import tensorflow as tf
import sys, traceback
import pdb
import json
import math

from utils.utils import glorot_init
class TBCNNModel():
    def __init__(self, opt):
        
        # self.top_a = 20
        # self.top_b = 25
        # self.num_conv = 8
        # self.output_size = 128
       

        # self.top_a = 10
        # self.top_b = 15
        # self.num_conv = 8
        # self.output_size = 16
        # self.caps1_num_dims = 8
        # self.caps1_num_caps = int(self.num_conv*self.output_size/self.caps1_num_dims)*self.top_a
        # self.caps1_out_caps = opt.label_size
        # self.caps1_out_dims = 8
        
        self.node_token_dim = opt.node_token_dim
        self.node_type_dim = opt.node_type_dim
        self.node_dim = self.node_type_dim + self.node_token_dim
        self.label_dim = self.node_type_dim + self.node_token_dim
        self.label_size = opt.label_size
        self.batch_size = opt.batch_size
        self.iter_routing = 3
        self.node_type_lookup = opt.node_type_lookup
        self.node_token_lookup = opt.node_token_lookup
        self.label_lookup = opt.label_lookup

    
        self.num_conv = opt.num_conv
        self.output_size = self.node_dim
     
     
        self.placeholders = {}
        self.weights = {}

        
        self.placeholders["node_types"] = tf.placeholder(tf.int32, shape=(None, None), name='tree_node_types')
        self.placeholders["node_tokens"] = tf.placeholder(tf.int32, shape=(None, None, None), name='tree_node_tokens')
        self.placeholders["children_indices"] = tf.placeholder(tf.int32, shape=(None, None, None), name='children_indices') # batch_size x max_num_nodes x max_children
        self.placeholders["children_node_types"] = tf.placeholder(tf.int32, shape=(None, None, None), name='children_types') # batch_size x max_num_nodes x max_children
        self.placeholders["children_node_tokens"] = tf.placeholder(tf.int32, shape=(None, None, None, None), name='children_tokens') # batch_size x max_num_nodes x max_children x max_sub_tokens
        self.placeholders["labels"] = tf.placeholder(tf.float32, (None, self.label_size,))
        # self.placeholders["children_indices"] = tf.placeholder(tf.int32, shape=[None,None], name='node_type_indices')
        # self.placeholders["node_token_indices"] = tf.placeholder(tf.int32, shape=[None,None,None], name='node_token_indices')
        std = 1.0 / math.sqrt(self.node_dim)

        self.placeholders["w_t"] = tf.Variable(tf.contrib.layers.xavier_initializer()([self.node_dim, self.output_size]), name='w_t')
        self.placeholders["w_l"] = tf.Variable(tf.contrib.layers.xavier_initializer()([self.node_dim, self.output_size]), name='w_l')
        self.placeholders["w_r"] = tf.Variable(tf.contrib.layers.xavier_initializer()([self.node_dim, self.output_size]), name='w_r')
        # self.placeholders["w_t"] = tf.Variable(tf.random.truncated_normal([self.node_dim, self.output_size], stddev=std), name='w_t')
        # self.placeholders["w_l"] = tf.Variable(tf.random.truncated_normal([self.node_dim, self.output_size], stddev=std), name='w_l')
        # self.placeholders["w_r"] = tf.Variable(tf.random.truncated_normal([self.node_dim, self.output_size], stddev=std), name='w_r')
        self.placeholders['is_training'] = tf.placeholder(tf.bool, name="is_training")

        self.placeholders["b_conv"] = tf.Variable(tf.zeros([self.output_size,]),name='b_conv')

        self.label_embeddings = tf.Variable(tf.contrib.layers.xavier_initializer()([len(self.label_lookup.keys()), self.label_dim]), name='label_embeddings')
        self.node_type_embeddings = tf.Variable(tf.contrib.layers.xavier_initializer()([len(self.node_type_lookup.keys()), self.node_type_dim]), name='node_type_embeddings')
        self.node_token_embeddings = tf.Variable(tf.contrib.layers.xavier_initializer()([len(self.node_token_lookup.keys()), self.node_token_dim]), name='node_token_embeddings')
        # self.label_embeddings = tf.Variable(tf.random.truncated_normal([len(self.label_lookup.keys()), self.label_dim], stddev=std), name='label_embeddings')
        # self.node_type_embeddings = tf.Variable(tf.random.truncated_normal([len(self.node_type_lookup.keys()), self.node_type_dim], stddev=std), name='node_type_embeddings')
        # self.node_token_embeddings = tf.Variable(tf.random.truncated_normal([len(self.node_token_lookup.keys()), self.node_token_dim], stddev=std), name='node_token_embeddings')
        
        # self.init_net_treecaps()
        """The Primary Variable Capsule Layer."""
        self.parent_node_type_embeddings = self.compute_parent_node_types_tensor(self.placeholders["node_types"])
        self.parent_node_token_embeddings = self.compute_parent_node_tokens_tensor(self.placeholders["node_tokens"])
     
        # children_vectors will have shape
        # (batch_size x max_tree_size x max_children x node_dim)
        # children_vectors = self.children_tensor(nodes, children, node_dim)
        children_node_types_tensor = self.compute_children_node_types_tensor(self.placeholders["children_indices"])
        # children_node_types_tensor = self.compute_children_node_types_tensor(parent_node_type_embeddings, self.placeholders["children_indices"], self.node_type_dim)
        children_node_tokens_tensor = self.compute_children_node_tokens_tensor(self.placeholders["children_node_tokens"])

        # self.parent_node_type_embeddings = tf.layers.batch_normalization(self.parent_node_type_embeddings, training=self.placeholders['is_training'])
        # self.parent_node_token_embeddings = tf.layers.batch_normalization(self.parent_node_token_embeddings, training=self.placeholders['is_training'])
        # children_node_types_tensor = tf.layers.batch_normalization(children_node_types_tensor, training=self.placeholders['is_training'])
        # children_node_tokens_tensor = tf.layers.batch_normalization(children_node_tokens_tensor, training=self.placeholders['is_training'])

        self.parent_node_embeddings = tf.concat([self.parent_node_type_embeddings, self.parent_node_token_embeddings], -1)
        self.children_embeddings = tf.concat([children_node_types_tensor, children_node_tokens_tensor], -1)

        self.parent_node_embeddings = tf.layers.batch_normalization(self.parent_node_embeddings, training=self.placeholders['is_training'])
        self.children_embeddings = tf.layers.batch_normalization(self.children_embeddings, training=self.placeholders['is_training'])

        self.convolved_nodes = self.conv_layer(self.num_conv, self.output_size, self.parent_node_embeddings, self.children_embeddings, self.placeholders["children_indices"], self.node_dim)
        self.code_representations = self.pooling_layer(self.convolved_nodes)
        

        # equal to logits
        self.logits = tf.matmul(self.code_representations, self.label_embeddings, transpose_b=True)
        # self.softmax_values = self.softmax_layer(self.logits)
        self.loss = self.loss_layer(self.logits)

    # def compute_children_node_types_tensor(self, parent_node_embeddings, children_indices, node_type_dim):
    #     """Build the children tensor from the input nodes and child lookup."""
    
    #     max_children = tf.shape(children_indices)[2]
    #     batch_size = tf.shape(parent_node_embeddings)[0]
    #     num_nodes = tf.shape(parent_node_embeddings)[1]

    #     # replace the root node with the zero vector so lookups for the 0th
    #     # vector return 0 instead of the root vector
    #     # zero_vecs is (batch_size, num_nodes, 1)
    #     zero_vecs = tf.zeros((batch_size, 1, node_type_dim))
    #     # vector_lookup is (batch_size x num_nodes x node_dim)
    #     vector_lookup = tf.concat([zero_vecs, parent_node_embeddings[:, 1:, :]], axis=1)
    #     # children is (batch_size x num_nodes x num_children x 1)
    #     children_indices = tf.expand_dims(children_indices, axis=3)
    #     # prepend the batch indices to the 4th dimension of children
    #     # batch_indices is (batch_size x 1 x 1 x 1)
    #     batch_indices = tf.reshape(tf.range(0, batch_size), (batch_size, 1, 1, 1))
    #     # batch_indices is (batch_size x num_nodes x num_children x 1)
    #     batch_indices = tf.tile(batch_indices, [1, num_nodes, max_children, 1])
    #     # children is (batch_size x num_nodes x num_children x 2)
    #     children_indices = tf.concat([batch_indices, children_indices], axis=3)
    #     # output will have shape (batch_size x num_nodes x num_children x node_type_dim)
    #     # NOTE: tf < 1.1 contains a bug that makes backprop not work for this!
    #     return tf.gather_nd(vector_lookup, children_indices)


    def compute_parent_node_types_tensor(self, parent_node_types_indices):
        parent_node_types_tensor =  tf.nn.embedding_lookup(self.node_type_embeddings,parent_node_types_indices)
        return parent_node_types_tensor
    
    def compute_parent_node_tokens_tensor(self, parent_node_tokens_indices):
        parent_node_tokens_tensor = tf.nn.embedding_lookup(self.node_token_embeddings, parent_node_tokens_indices)
        parent_node_tokens_tensor = tf.reduce_mean(parent_node_tokens_tensor, axis=2)
        return parent_node_tokens_tensor

    def compute_children_node_types_tensor(self, children_node_types_indices):
        children_node_types_tensor =  tf.nn.embedding_lookup(self.node_type_embeddings, children_node_types_indices)
        return children_node_types_tensor
    
    def compute_children_node_tokens_tensor(self, children_node_tokens_indices):
        children_node_tokens_tensor = tf.nn.embedding_lookup(self.node_token_embeddings, children_node_tokens_indices)
        children_node_tokens_tensor = tf.reduce_mean(children_node_tokens_tensor, axis=3)
        return children_node_tokens_tensor

    def conv_node(self, parent_node_embeddings, children_embeddings, children_indices, node_dim, output_size):
        """Perform convolutions over every batch sample."""
        with tf.name_scope('conv_node'):
            w_t, w_l, w_r = self.placeholders["w_t"], self.placeholders["w_l"], self.placeholders["w_r"]
            b_conv = self.placeholders["b_conv"]
       
            return self.conv_step(parent_node_embeddings, children_embeddings, children_indices, node_dim, w_t, w_r, w_l, b_conv)
    
    def conv_layer(self, num_conv, output_size, parent_node_embeddings, children_embeddings, children_indices, node_dim):
        """Creates a convolution layer with num_conv convolutions merged together at
        the output. Final output will be a tensor with shape
        [batch_size, num_nodes, output_size * num_conv]"""

        with tf.name_scope('conv_layer'):
            nodes = [
                self.conv_node(parent_node_embeddings, children_embeddings, children_indices, node_dim, output_size)
                for _ in range(num_conv)
            ]
            return tf.concat(nodes, axis=2)
       
    def conv_step(self, parent_node_embeddings, children_embeddings, children_indices, node_dim, w_t, w_r, w_l, b_conv):
        """Convolve a batch of nodes and children.
        Lots of high dimensional tensors in this function. Intuitively it makes
        more sense if we did this work with while loops, but computationally this
        is more efficient. Don't try to wrap your head around all the tensor dot
        products, just follow the trail of dimensions.
        """
        with tf.name_scope('conv_step'):
            # nodes is shape (batch_size x max_tree_size x node_dim)
            # children is shape (batch_size x max_tree_size x max_children)

            with tf.name_scope('trees'):
              
                # add a 4th dimension to the parent nodes tensor
                # nodes is shape (batch_size x max_tree_size x 1 x node_dim)
                parent_node_embeddings = tf.expand_dims(parent_node_embeddings, axis=2)
                # tree_tensor is shape
                # (batch_size x max_tree_size x max_children + 1 x node_dim)
                tree_tensor = tf.concat([parent_node_embeddings, children_embeddings], axis=2, name='trees')

            with tf.name_scope('coefficients'):
                # coefficient tensors are shape (batch_size x max_tree_size x max_children + 1)
                c_t = self.eta_t(children_indices)
                c_r = self.eta_r(children_indices, c_t)
                c_l = self.eta_l(children_indices, c_t, c_r)

                # concatenate the position coefficients into a tensor
                # (batch_size x max_tree_size x max_children + 1 x 3)
                coef = tf.stack([c_t, c_r, c_l], axis=3, name='coef')

            with tf.name_scope('weights'):
                # stack weight matrices on top to make a weight tensor
                # (3, node_dim, output_size)
                weights = tf.stack([w_t, w_r, w_l], axis=0)

            with tf.name_scope('combine'):
                batch_size = tf.shape(children_indices)[0]
                max_tree_size = tf.shape(children_indices)[1]
                max_children = tf.shape(children_indices)[2]

                # reshape for matrix multiplication
                x = batch_size * max_tree_size
                y = max_children + 1
                result = tf.reshape(tree_tensor, (x, y, node_dim))
                coef = tf.reshape(coef, (x, y, 3))
                result = tf.matmul(result, coef, transpose_a=True)
                result = tf.reshape(result, (batch_size, max_tree_size, 3, node_dim))

                # output is (batch_size, max_tree_size, output_size)
                result = tf.tensordot(result, weights, [[2, 3], [0, 1]])

                # output is (batch_size, max_tree_size, output_size)
                return tf.nn.tanh(result + b_conv)

    def eta_t(self, children):
        """Compute weight matrix for how much each vector belongs to the 'top'"""
        with tf.name_scope('coef_t'):
            # children is shape (batch_size x max_tree_size x max_children)
            batch_size = tf.shape(children)[0]
            max_tree_size = tf.shape(children)[1]
            max_children = tf.shape(children)[2]
            # eta_t is shape (batch_size x max_tree_size x max_children + 1)
            return tf.tile(tf.expand_dims(tf.concat(
                [tf.ones((max_tree_size, 1)), tf.zeros((max_tree_size, max_children))],
                axis=1), axis=0,
            ), [batch_size, 1, 1], name='coef_t')

    def eta_r(self, children, t_coef):
        """Compute weight matrix for how much each vector belogs to the 'right'"""
        with tf.name_scope('coef_r'):
            # children is shape (batch_size x max_tree_size x max_children)
            children = tf.cast(children, tf.float32)
            batch_size = tf.shape(children)[0]
            max_tree_size = tf.shape(children)[1]
            max_children = tf.shape(children)[2]

            # num_siblings is shape (batch_size x max_tree_size x 1)
            num_siblings = tf.cast(
                tf.count_nonzero(children, axis=2, keep_dims=True),
                dtype=tf.float32
            )
            # num_siblings is shape (batch_size x max_tree_size x max_children + 1)
            num_siblings = tf.tile(
                num_siblings, [1, 1, max_children + 1], name='num_siblings'
            )
            # creates a mask of 1's and 0's where 1 means there is a child there
            # has shape (batch_size x max_tree_size x max_children + 1)
            mask = tf.concat(
                [tf.zeros((batch_size, max_tree_size, 1)),
                tf.minimum(children, tf.ones(tf.shape(children)))],
                axis=2, name='mask'
            )

            # child indices for every tree (batch_size x max_tree_size x max_children + 1)
            child_indices = tf.multiply(tf.tile(
                tf.expand_dims(
                    tf.expand_dims(
                        tf.range(-1.0, tf.cast(max_children, tf.float32), 1.0, dtype=tf.float32),
                        axis=0
                    ),
                    axis=0
                ),
                [batch_size, max_tree_size, 1]
            ), mask, name='child_indices')

            # weights for every tree node in the case that num_siblings = 0
            # shape is (batch_size x max_tree_size x max_children + 1)
            singles = tf.concat(
                [tf.zeros((batch_size, max_tree_size, 1)),
                tf.fill((batch_size, max_tree_size, 1), 0.5),
                tf.zeros((batch_size, max_tree_size, max_children - 1))],
                axis=2, name='singles')

            # eta_r is shape (batch_size x max_tree_size x max_children + 1)
            return tf.where(
                tf.equal(num_siblings, 1.0),
                # avoid division by 0 when num_siblings == 1
                singles,
                # the normal case where num_siblings != 1
                tf.multiply((1.0 - t_coef), tf.divide(child_indices, num_siblings - 1.0)),
                name='coef_r'
            )

    def eta_l(self, children, coef_t, coef_r):
        """Compute weight matrix for how much each vector belongs to the 'left'"""
        with tf.name_scope('coef_l'):
            children = tf.cast(children, tf.float32)
            batch_size = tf.shape(children)[0]
            max_tree_size = tf.shape(children)[1]
            # creates a mask of 1's and 0's where 1 means there is a child there
            # has shape (batch_size x max_tree_size x max_children + 1)
            mask = tf.concat(
                [tf.zeros((batch_size, max_tree_size, 1)),
                    tf.minimum(children, tf.ones(tf.shape(children)))],
                axis=2,
                name='mask'
            )

            # eta_l is shape (batch_size x max_tree_size x max_children + 1)
            return tf.multiply(
                tf.multiply((1.0 - coef_t), (1.0 - coef_r)), mask, name='coef_l'
            )

    def pooling_layer(self, nodes):
        """Creates a max dynamic pooling layer from the nodes."""
        with tf.name_scope("pooling"):
            pooled = tf.reduce_max(nodes, axis=1)
            return pooled

    def lrelu(self, x, alpha):
        return tf.nn.relu(x) - alpha * tf.nn.relu(-x)

    def hidden_layer(self, pooled, input_size, output_size):
        """Create a hidden feedforward layer."""
        with tf.name_scope("hidden"):
            weights = tf.Variable(
                tf.truncated_normal(
                    [input_size, output_size], stddev=1.0 / math.sqrt(input_size)
                ),
                name='weights'
            )

            init = tf.truncated_normal([output_size,], stddev=math.sqrt(2.0/input_size))
            #init = tf.zeros([output_size,])
            biases = tf.Variable(init, name='biases')

            return lrelu(tf.matmul(pooled, weights) + biases, 0.01)


    def loss_layer(self, logits_node):
        """Create a loss layer for training."""
        labels = self.placeholders['labels']

        with tf.name_scope('loss_layer'):
            cross_entropy = tf.nn.softmax_cross_entropy_with_logits(
                labels=labels, logits=logits_node, name='cross_entropy'
            )

            loss = tf.reduce_mean(cross_entropy, name='cross_entropy_mean')
            return loss

    def loss_layer(self, logits_node):
        """Create a loss layer for training."""

        labels = self.placeholders["labels"]

        with tf.name_scope('loss_layer'):
            max_l = tf.square(tf.maximum(0., 0.9 - logits_node))
            max_r = tf.square(tf.maximum(0., logits_node - 0.1))
            T_c = labels
            L_c = T_c * max_l + 0.5 * (1 - T_c) * max_r
            
            loss = tf.reduce_mean(tf.reduce_sum(L_c, axis=1))

            return loss

    def softmax_layer(self, logits_node):
        """Apply softmax to the output layer."""
        with tf.name_scope('output'):
            return tf.nn.softmax(logits_node)