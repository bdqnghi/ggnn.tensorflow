from typing import Sequence, Any
from collections import defaultdict
import numpy as np
import tensorflow as tf
import sys, traceback
import pdb
import json
import math

from utils.utils import glorot_init
class TreeCapsModel():
    def __init__(self, opt):
        
        # self.top_a = 20
        # self.top_b = 25
        # self.num_conv = 8
        # self.output_size = 128
       

        # self.top_a = 10
        # self.top_b = 15
        # self.num_conv = 8
        # self.output_size = 16
        # self.num_channel = 8
        # self.num_caps_top_a = int(self.num_conv*self.output_size/self.num_channel)*self.top_a
        # self.num_output_dynamic_routing = opt.label_size
        # self.num_channel_dynamic_routing = 8
        
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

        self.top_a = opt.top_a
     
        self.num_conv = opt.num_conv
        self.output_size = opt.output_size # should change to the name conv_output_size
        self.num_channel = opt.num_channel
        # Num set of capsules 
        self.num_caps_top_a = int(self.num_conv*self.output_size/self.num_channel)*self.top_a
        # self.num_output_dynamic_routing = self.node_dim
        self.num_output_dynamic_routing = self.node_dim
        self.num_channel_dynamic_routing = opt.num_channel_dynamic_routing
     
        self.placeholders = {}
        self.weights = {}

        self.placeholders["node_types"] = tf.placeholder(tf.int32, shape=(None, None), name='tree_node_types')
        self.placeholders["node_tokens"] = tf.placeholder(tf.int32, shape=(None, None, None), name='tree_node_tokens')
        self.placeholders["children_indices"] = tf.placeholder(tf.int32, shape=(None, None, None), name='children_indices') # batch_size x max_num_nodes x max_children
        self.placeholders["children_node_types"] = tf.placeholder(tf.int32, shape=(None, None, None), name='children_types') # batch_size x max_num_nodes x max_children
        self.placeholders["children_node_tokens"] = tf.placeholder(tf.int32, shape=(None, None, None, None), name='children_tokens') # batch_size x max_num_nodes x max_children x max_sub_tokens
        self.placeholders["labels"] = tf.placeholder(tf.float32, (None, self.label_size,))

        for i in range(self.num_conv):
            self.placeholders["w_t_" + str(i)] = tf.Variable(tf.contrib.layers.xavier_initializer()([self.node_dim, self.output_size]), name='w_t_' + str(i))
            self.placeholders["w_l_" + str(i)] = tf.Variable(tf.contrib.layers.xavier_initializer()([self.node_dim, self.output_size]), name='w_l_' + str(i))
            self.placeholders["w_r_" + str(i)] = tf.Variable(tf.contrib.layers.xavier_initializer()([self.node_dim, self.output_size]), name='w_r_' + str(i))
            self.placeholders["b_conv_" + str(i)] = tf.Variable(tf.zeros([self.output_size,]),name='b_conv_' + str(i))
        
        self.placeholders['is_training'] = tf.placeholder(tf.bool, name="is_training")
    
        shape_of_weight_dynamic_routing = [1, self.output_size, self.num_channel_dynamic_routing * self.num_output_dynamic_routing, self.num_conv, 1]
        shape_of_bias_dynamic_routing = [1, 1, self.num_output_dynamic_routing, self.num_channel_dynamic_routing, 1]

        self.placeholders["w_dynamic_routing"] = tf.Variable(tf.contrib.layers.xavier_initializer()(shape_of_weight_dynamic_routing), name='w_dynamic_routing')
        self.placeholders["b_dynamic_routing"] = tf.Variable(tf.zeros(shape_of_bias_dynamic_routing), name='b_dynamic_routing')
    
        self.label_embeddings = tf.Variable(tf.contrib.layers.xavier_initializer()([len(self.label_lookup.keys()), self.num_output_dynamic_routing]), name='label_embeddings')
        self.node_type_embeddings = tf.Variable(tf.contrib.layers.xavier_initializer()([len(self.node_type_lookup.keys()), self.node_type_dim]), name='node_type_embeddings')
        self.node_token_embeddings = tf.Variable(tf.contrib.layers.xavier_initializer()([len(self.node_token_lookup.keys()), self.node_token_dim]), name='node_token_embeddings')
        
        
        # shape = (batch_size, max_tree_size, node_type_dim)
        # Example with batch size = 12: shape = (12, 48, 30)
        self.parent_node_type_embeddings = self.compute_parent_node_types_tensor(self.placeholders["node_types"])

        # shape = (batch_size, max_tree_size, node_token_dim)
        # Example with batch size = 12: shape = (12, 48, 50))
        self.parent_node_token_embeddings = self.compute_parent_node_tokens_tensor(self.placeholders["node_tokens"])

        # children_node_types_tensor = self.compute_children_node_types_tensor(self.placeholders["children_indices"])
       
        # shape = (batch_size, max_tree_size, max_children, node_type_dim)
        # Example with batch size = 12: shape = (12, 48, 8, 30)
        self.children_node_types_tensor = self.compute_children_node_types_tensor(self.parent_node_type_embeddings, self.placeholders["children_indices"], self.node_type_dim)
        
        # shape = (batch_size, max_tree_size, max_children, node_token_dim)
        # Example with batch size = 12: shape = (12, 48, 7, 50)
        # self.children_node_tokens_tensor = self.compute_children_node_tokens_tensor(self.placeholders["children_node_tokens"])
        self.children_node_tokens_tensor = self.compute_children_node_tokens_tensor(self.placeholders["children_node_tokens"], self.node_token_dim)

        # Batch normalization for the inputs for regularization
        # self.parent_node_type_embeddings = tf.layers.batch_normalization(self.parent_node_type_embeddings, training=self.placeholders['is_training'])
        # self.parent_node_token_embeddings = tf.layers.batch_normalization(self.parent_node_token_embeddings, training=self.placeholders['is_training'])
        # self.children_node_types_tensor = tf.layers.batch_normalization(self.children_node_types_tensor, training=self.placeholders['is_training'])
        # self.children_node_tokens_tensor = tf.layers.batch_normalization(self.children_node_tokens_tensor, training=self.placeholders['is_training'])

        # shape = (batch_size, max_tree_size, (node_type_dim + node_token_dim))
        # Example with batch size = 12: shape = (12, 48, (30 + 50))) = (12, 48, 80)
        self.parent_node_embeddings = tf.concat([self.parent_node_type_embeddings, self.parent_node_token_embeddings], -1)
        
        # shape = (batch_size, max_tree_size, max_children, (node_type_dim + node_token_dim))
        # Example with batch size = 12: shape = (12, 48, 7, (30 + 50))) = (12, 48, 6, 80)
        self.children_embeddings = tf.concat([self.children_node_types_tensor, self.children_node_tokens_tensor], -1)

        
        """Tree based Convolutional Layer"""
        # Example with batch size = 12 and num_conv = 8: shape = (12, 48, 128, 8)
        # Example with batch size = 1 and num_conv = 8: shape = (1, 48, 128, 8)
        self.conv_output = self.conv_layer(self.parent_node_embeddings, self.children_embeddings, self.placeholders["children_indices"], self.num_conv, self.node_dim)

        """The Primary Variable Capsule Layer."""
        # shape = (1, batch_size x max_tree_size, num_output, num_conv)
        # Example with batch size = 12: shape = (12, 48, 128, 8)
        # Example with batch size = 1: shape = (1, 48, 128, 8)
        self.primary_variable_caps = self.primary_variable_capsule_layer(self.conv_output)
        
    
        """The Code Capsule Layer."""
        #Get the input shape to the dynamic routing algorithm

        # batch size = 1: (12, 1, 80, 8, 1)
        # self.code_caps = self.dynamic_routing(self.dynamic_routing_shape, self.primary_static_caps, num_outputs=self.num_output_dynamic_routing, num_dims=self.num_channel_dynamic_routing)
        self.code_caps, delta_IJ = self.dynamic_routing_2(self.primary_variable_caps, num_outputs=self.num_output_dynamic_routing, num_dims=self.num_channel_dynamic_routing)
        # batch size = 1: (12, 80, 8, 1)
        self.code_caps = tf.squeeze(self.code_caps, axis=1)
        
        """Obtaining the classification output."""
        # batch size = 12: (12, 80, 1, 1)
        self.code_caps = tf.sqrt(tf.reduce_sum(tf.square(self.code_caps),axis=2, keepdims=True) + 1e-9)
        
        # batch size = 12: (12, 80)
        self.code_caps = tf.reshape(self.code_caps,(-1, self.num_output_dynamic_routing))
        
        # equal to logits
        # (12 x 80) x (80 x 55) = (1 x 55)
        self.logits = tf.matmul(self.code_caps, self.label_embeddings, transpose_b=True)
        self.softmax_values = self.softmax_layer(self.logits)
        self.loss = self.loss_layer(self.logits)
    
    def dynamic_routing_2(self, primary_variable_caps, num_outputs=10, num_dims=16):
        # num_channel: number of capsules
        # output_size: dimension of output capsule
        # num_conv: num tbcnn layers
        # input_size: dimension of input capsule, which is taken from the tbcnn layer

        # (1, input_size, num_channel x output_size, num_conv, 1)
        # (1, 50, 8 * 80, 2, 1)
        # (1, 50, 640, 2, 1)
        w_dynamic_routing = self.placeholders["w_dynamic_routing"]
        # (1, 1, 80, 8, 1)
        b_dynamic_routing = self.placeholders["b_dynamic_routing"]
        
        # tile with max_node = (1, output_size x max_node, 640, 2, 1)
        # (1, output_size x max_node, num_channel x output_size, 2, 1)
        w_dynamic_routing = tf.tile(w_dynamic_routing, [1, tf.shape(primary_variable_caps)[1], 1, 1, 1])

       
        # (3, output_size x max_node, 1, num_conv, 1)
        primary_variable_caps_reshaped = tf.reshape(primary_variable_caps, shape=[self.batch_size, -1, 1, self.num_conv, 1])
        # (3, output_size x max_node, 80, 1, 1)
        primary_variable_caps_tiled = tf.tile(primary_variable_caps_reshaped, [1, 1, num_dims * num_outputs, 1, 1])

        # (3, output_size x max_node, num_channel x output_size, num_conv, 1)
        u_hat = w_dynamic_routing * primary_variable_caps_tiled
        # (3, output_size x max_node, num_channel x output_size, 1, 1)
        u_hat = tf.reduce_sum(u_hat, axis=3, keep_dims=True)
        
        # (3, output_size x max_node, output_size, num_channel, 1)
        u_hat = tf.reshape(u_hat, shape=[-1, tf.shape(primary_variable_caps_reshaped)[1], num_outputs, num_dims, 1])

        u_hat_stopped = tf.stop_gradient(u_hat, name='stop_gradient')

        # (3, output_size x max_node, 80, 1, 1)
        delta_IJ = tf.zeros([self.batch_size, tf.shape(primary_variable_caps_reshaped)[1], num_outputs, 1, 1], dtype=tf.dtypes.float32)
        for r_iter in range(self.iter_routing):
            with tf.variable_scope('iter_' + str(r_iter)):
                gamma_IJ = tf.nn.softmax(delta_IJ, axis=2)

                if r_iter == self.iter_routing - 1:
                    # (3, output_size x max_node, 80, 8, 1)
                    s_J = tf.multiply(gamma_IJ, u_hat)
                    # (3, 1, 80, 8, 1)
                    s_J = tf.reduce_sum(s_J, axis=1, keepdims=True) + b_dynamic_routing
                    v_J = self.squash(s_J)
                elif r_iter < self.iter_routing - 1:  # Inner iterations, do not apply backpropagation
                    # (3, output_size x max_node, 80, 8, 1)
                    s_J = tf.multiply(gamma_IJ, u_hat_stopped)
                    # (3, 1, 80, 8, 1)
                    s_J = tf.reduce_sum(s_J, axis=1, keepdims=True) + b_dynamic_routing
                    # (3, 1, 80, 8, 1)
                    v_J = self.squash(s_J)
                    # (3, output_size x max_node, 80, 8, 1)
                    v_J_tiled = tf.tile(v_J, [1,tf.shape(primary_variable_caps_reshaped)[1], 1, 1, 1])
                    # (3, output_size x max_node, 80, 1, 1)
                    u_produce_v = tf.reduce_sum(u_hat_stopped * v_J_tiled, axis=3, keepdims=True)
                    # (3, output_size x max_node, 80, 1, 1)
                    delta_IJ += u_produce_v

        return v_J, delta_IJ
   
    def compute_children_node_types_tensor(self, parent_node_embeddings, children_indices, node_type_dim):
        """Build the children tensor from the input nodes and child lookup."""
    
        max_children = tf.shape(children_indices)[2]
        batch_size = tf.shape(parent_node_embeddings)[0]
        num_nodes = tf.shape(parent_node_embeddings)[1]

        # replace the root node with the zero vector so lookups for the 0th
        # vector return 0 instead of the root vector
        # zero_vecs is (batch_size, num_nodes, 1)
        zero_vecs = tf.zeros((batch_size, 1, node_type_dim))
        # vector_lookup is (batch_size x num_nodes x node_dim)
        vector_lookup = tf.concat([zero_vecs, parent_node_embeddings[:, 1:, :]], axis=1)
        # children is (batch_size x num_nodes x num_children x 1)
        children_indices = tf.expand_dims(children_indices, axis=3)
        # prepend the batch indices to the 4th dimension of children
        # batch_indices is (batch_size x 1 x 1 x 1)
        batch_indices = tf.reshape(tf.range(0, batch_size), (batch_size, 1, 1, 1))
        # batch_indices is (batch_size x num_nodes x num_children x 1)
        batch_indices = tf.tile(batch_indices, [1, num_nodes, max_children, 1])
        # children is (batch_size x num_nodes x num_children x 2)
        children_indices = tf.concat([batch_indices, children_indices], axis=3)
        # output will have shape (batch_size x num_nodes x num_children x node_type_dim)
        # NOTE: tf < 1.1 contains a bug that makes backprop not work for this!
        return tf.gather_nd(vector_lookup, children_indices)


    def compute_parent_node_types_tensor(self, parent_node_types_indices):
        parent_node_types_tensor =  tf.nn.embedding_lookup(self.node_type_embeddings,parent_node_types_indices)
        return parent_node_types_tensor
    
    def compute_parent_node_tokens_tensor(self, parent_node_tokens_indices):
        parent_node_tokens_tensor = tf.nn.embedding_lookup(self.node_token_embeddings, parent_node_tokens_indices)
        parent_node_tokens_tensor = tf.reduce_sum(parent_node_tokens_tensor, axis=2)
        return parent_node_tokens_tensor

    # def compute_children_node_types_tensor(self, children_node_types_indices):
    #     children_node_types_tensor =  tf.nn.embedding_lookup(self.node_type_embeddings, children_node_types_indices)
    #     return children_node_types_tensor
    
    def compute_children_node_tokens_tensor(self, children_node_tokens_indices, node_token_dim):
        batch_size = tf.shape(children_node_tokens_indices)[0]
        zero_vecs = tf.zeros((1, node_token_dim))
        vector_lookup = tf.concat([zero_vecs, self.node_token_embeddings[1:, :]], axis=0)
        children_node_tokens_tensor = tf.nn.embedding_lookup(vector_lookup, children_node_tokens_indices)
        children_node_tokens_tensor = tf.reduce_sum(children_node_tokens_tensor, axis=3)
        return children_node_tokens_tensor

    def conv_node(self, parent_node_embeddings, children_embeddings, children_indices, node_dim, layer):
        """Perform convolutions over every batch sample."""
        with tf.name_scope('conv_node'):
            w_t, w_l, w_r = self.placeholders["w_t_" + str(layer)], self.placeholders["w_l_" + str(layer)], self.placeholders["w_r_" + str(layer)]
            b_conv = self.placeholders["b_conv_" + str(layer)]
       
            return self.conv_step(parent_node_embeddings, children_embeddings, children_indices, node_dim, w_t, w_r, w_l, b_conv)

    def conv_layer(self, parent_node_embeddings, children_embeddings, children_indices, num_conv, node_dim):
        with tf.name_scope('conv_layer'):
            nodes = [
                tf.expand_dims(self.conv_node(parent_node_embeddings, children_embeddings, children_indices, node_dim, layer),axis=-1)
                for layer in range(num_conv)
            ] 
            return nodes 
    
    def primary_variable_capsule_layer(self, conv_output):
        primary_variable_caps= tf.concat(conv_output, axis=-1)
        return primary_variable_caps

    # def primary_variable_capsule_layer(self, conv_output, num_conv, output_size):
    #     """The proposed Primary Variable Capsule Layer."""
    #     with tf.name_scope('primary_variable_capsule_layer'):
    #         primary_variable_capsules = tf.reshape(conv_output,shape=(1,-1,output_size,num_conv))
    #         return primary_variable_capsules


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


    def squash(self, vector):
        vec_squared_norm = tf.reduce_sum(tf.square(vector), -2, keepdims=True)
        scalar_factor = vec_squared_norm / (1 + vec_squared_norm) / tf.sqrt(vec_squared_norm + 1e-9)
        vec_squashed = scalar_factor * vector  # element-wise
        return(vec_squashed)

   
    def attention_layer(primary_variable_caps, mask, emb_size,channel_num):
        """
        :param inputs: (batch, N, C, d)
        :param batch_size:
        :param mask: (batch, N, 1)
        :param name:
        :param emb_size: int(d)
        :param channel_num: int(C)
        :return: (batch, N, C, d)
        """

        N = tf.shape(inputs)[1]
        with tf.variable_scope(name) as scope:
            inputs_ = tf.reshape(inputs, shape=[batch_size * N, emb_size * channel_num])  # (?*N, C*d)
            atten = tf.layers.dense(inputs_, units=int(emb_size * channel_num / 16), activation=tf.nn.tanh)  # (?*N, C*d/16)
            atten = tf.layers.dense(atten, units=channel_num, activation=None)  # (?*N, C)
            atten = tf.reshape(atten, shape=[batch_size, N, channel_num, 1])  # (?, N, C, 1)
            atten = mask_softmax(atten, mask, dim=1)  # (batch, N, C, 1)

            input_scaled = tf.multiply(inputs, atten)  # (batch, N, C, 1)
            num_nodes = tf.expand_dims(tf.reduce_sum(mask, axis=1, keep_dims=True), axis=-1)
            input_scaled = input_scaled * num_nodes

        return input_scaled


    #   def dynamic_routing_2(self, dynamic_routing_shape, primary_variable_caps, num_outputs=10, num_dims=16):
    #     # capsule_dim : Capsule dimension
    #     # num_conv: Num of TBCNN layers
        
    #     # primary_variable_caps = (batch_size, max_nodes, capsule_dim, num_conv)
    #     # (12, 48, 50, 8)

    #     # (batch_size, max_nodes, num_capsule, capsule_dim, num_conv)
    #     # (12, 48, 50, 50, 8)
    #     primary_variable_caps = tf.stack([primary_variable_caps] * self.num_capsule,  axis=3)

    #     # (12, 48, 50, 50, 8, 1)
    #     primary_variable_caps = tf.expand_dims(primary_variable_caps,  axis=5)

    #     # (1, num_channel, num_capsule, capsule_dim, num_conv)
    #     # (1, 50, 50, 30, 8)
    #     w_dynamic_routing = self.placeholders["w_dynamic_routing"]
    #     # b_dynamic_routing = self.placeholders["b_dynamic_routing"]

    #     # (1, 48, 50, 50, 50, 8)
    #     w_dynamic_routing = tf.tile(w_dynamic_routing, tf.shape(self.placeholders["w_dr_tile"]))

    #     # (1, 48, 50, 50, 50, 8) x (12, 48, 50, 50, 8, 1) = (3, 48, 50, 50, 30, 2)
    #     u_hat = tf.matmul(w_dynamic_routing, primary_variable_caps)

    #     # (1, 118, 50, 50, 30, 2)
    #     # u_hat = tf.reduce_sum(u_hat, axis=3, keep_dims=True)
    #     # u_hat = tf.reshape(u_hat, shape=[-1, self.num_caps_top_a, num_outputs, num_dims, 1])

    #     u_hat_stopped = tf.stop_gradient(u_hat, name='stop_gradient')

    #     delta_IJ = tf.zeros([1, self.num_channel, self.num_capsule, 1], dtype=tf.dtypes.float32)

    #     for r_iter in range(self.iter_routing):
    #         with tf.variable_scope('iter_' + str(r_iter)):
    #             gamma_IJ = tf.nn.softmax(delta_IJ, axis=2)

    #     #         if r_iter == self.iter_routing - 1:
    #     #             s_J = tf.multiply(gamma_IJ, u_hat)
    #     #             s_J = tf.reduce_sum(s_J, axis=1, keepdims=True) + b_dynamic_routing
    #     #             v_J = self.squash(s_J)
    #     #         elif r_iter < self.iter_routing - 1:  # Inner iterations, do not apply backpropagation
    #     #             s_J = tf.multiply(gamma_IJ, u_hat_stopped)
    #     #             s_J = tf.reduce_sum(s_J, axis=1, keepdims=True) + b_dynamic_routing
    #     #             v_J = self.squash(s_J)
    #     #             v_J_tiled = tf.tile(v_J, [1,self.num_caps_top_a, 1, 1, 1])
    #     #             u_produce_v = tf.reduce_sum(u_hat_stopped * v_J_tiled, axis=3, keepdims=True)
    #     #             delta_IJ += u_produce_v

    #     return gamma_IJ