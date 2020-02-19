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

        self.top_a = opt.top_a
        self.top_b = opt.top_b
        self.num_conv = opt.num_conv
        self.output_size = opt.output_size
        self.caps1_num_dims = opt.caps1_num_dims
        self.caps1_num_caps = int(self.num_conv*self.output_size/self.caps1_num_dims)*self.top_a
        self.caps1_out_caps = self.node_dim
        self.caps1_out_dims = opt.caps1_num_dims

     
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

        self.dynamic_routing_shape = [self.batch_size, self.caps1_num_caps, 1, self.caps1_num_dims,1]
        
        shape_of_weight_dynamic_routing = [1, self.dynamic_routing_shape[1], self.caps1_out_dims * self.caps1_out_caps] + self.dynamic_routing_shape[-2:]
        shape_of_bias_dynamic_routing = [1, 1, self.caps1_out_caps, self.caps1_out_dims, 1]

        self.placeholders["w_dynamic_routing"] = tf.Variable(tf.contrib.layers.xavier_initializer()(shape_of_weight_dynamic_routing), name='w_dynamic_routing')
        self.placeholders["b_dynamic_routing"] = tf.Variable(tf.zeros(shape_of_bias_dynamic_routing), name='b_dynamic_routing')
    
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
        # children_node_types_tensor = self.compute_children_node_types_tensor(self.placeholders["children_indices"])
        self.children_node_types_tensor = self.compute_children_node_types_tensor(self.parent_node_type_embeddings, self.placeholders["children_indices"], self.node_type_dim)
        self.children_node_tokens_tensor = self.compute_children_node_tokens_tensor(self.placeholders["children_node_tokens"])

        self.parent_node_type_embeddings = tf.layers.batch_normalization(self.parent_node_type_embeddings, training=self.placeholders['is_training'])
        self.parent_node_token_embeddings = tf.layers.batch_normalization(self.parent_node_token_embeddings, training=self.placeholders['is_training'])
        self.children_node_types_tensor = tf.layers.batch_normalization(self.children_node_types_tensor, training=self.placeholders['is_training'])
        self.children_node_tokens_tensor = tf.layers.batch_normalization(self.children_node_tokens_tensor, training=self.placeholders['is_training'])

        self.parent_node_embeddings = tf.concat([self.parent_node_type_embeddings, self.parent_node_token_embeddings], -1)
        self.children_embeddings = tf.concat([self.children_node_types_tensor, self.children_node_tokens_tensor], -1)

        self.primary_variable_caps = self.primary_variable_capsule_layer(self.num_conv, self.output_size, self.parent_node_embeddings, self.children_embeddings, self.placeholders["children_indices"], self.node_dim, self.caps1_num_dims)
        
        """The Primary Static Capsule Layer."""
        #  [1,2560,8,1]
        self.primary_static_caps = self.vts_routing(self.primary_variable_caps,self.top_a,self.top_b,self.caps1_num_caps,self.caps1_num_dims)        
        # [2,1280,1,8,1].
        self.primary_static_caps = tf.reshape(self.primary_static_caps, shape=(1, -1, 1, self.caps1_num_dims, 1))
        
        """The Code Capsule Layer."""
        #Get the input shape to the dynamic routing algorithm
        
        self.code_caps_1 = self.dynamic_routing(self.dynamic_routing_shape, self.primary_static_caps, num_outputs=self.caps1_out_caps, num_dims=self.caps1_out_dims)
        self.code_caps = tf.squeeze(self.code_caps_1, axis=1)
        
        """Obtaining the classification output."""
        self.code_caps = tf.sqrt(tf.reduce_sum(tf.square(self.code_caps),axis=2, keepdims=True) + 1e-9)
        
        self.code_caps = tf.reshape(self.code_caps,(-1, self.caps1_out_caps))
        
        # equal to logits
        self.logits = tf.matmul(self.code_caps, self.label_embeddings, transpose_b=True)
        self.softmax_values = self.softmax_layer(self.logits)
        self.loss = self.loss_layer(self.logits)

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
        parent_node_tokens_tensor = tf.reduce_mean(parent_node_tokens_tensor, axis=2)
        return parent_node_tokens_tensor

    # def compute_children_node_types_tensor(self, children_node_types_indices):
    #     children_node_types_tensor =  tf.nn.embedding_lookup(self.node_type_embeddings, children_node_types_indices)
    #     return children_node_types_tensor
    
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
            

    # def init_net_treecaps(self):
    #     """Initialize an empty TreeCaps network."""
        
    #     with tf.name_scope('network'):  
    #         """The Primary Variable Capsule Layer."""
    #         parent_node_embeddings = self.placeholders["node_types"]
    #         primary_variable_caps = self.primary_variable_capsule_layer(self.num_conv, self.output_size, parent_node_embeddings, self.placeholders["children_indices"], self.placeholders["children_node_types"], self.placeholders["children_node_tokens"], self.node_dim, self.caps1_num_dims)
            
    #         """The Primary Static Capsule Layer."""
    #         #  [1,2560,8,1]
    #         primary_static_caps = self.vts_routing(primary_variable_caps,self.top_a,self.top_b,self.caps1_num_caps,self.caps1_num_dims)        
    #         # [2,1280,1,8,1].
    #         primary_static_caps = tf.reshape(primary_static_caps, shape=(1, -1, 1, self.caps1_num_dims, 1))
            
    #         """The Code Capsule Layer."""
    #         #Get the input shape to the dynamic routing algorithm
            
    #         codeCaps = self.dynamic_routing(self.dynamic_routing_shape, primary_static_caps, num_outputs=self.caps1_out_caps, num_dims=self.caps1_out_dims)
    #         codeCaps = tf.squeeze(codeCaps, axis=1)
            
    #         """Obtaining the classification output."""
    #         v_length = tf.sqrt(tf.reduce_sum(tf.square(codeCaps),axis=2, keepdims=True) + 1e-9)
    #         out = tf.reshape(v_length,(-1, self.label_size))

       

    def dynamic_routing(self, dynamic_routing_shape, primary_static_caps, num_outputs=10, num_dims=16):
        """The Dynamic Routing Algorithm proposed by Sabour et al."""
        
        # [1, (8*128/8)*20, 8*10] + [8,1] = 
        # [1, 2560, 80, 8, 1]
        # [2, 1280, 80, 8, 1]

        # [1,2560,8,1]
        # [2,1280,1,8,1]
        # [2,1280,80,8,1]
        
        w_dynamic_routing = self.placeholders["w_dynamic_routing"]
        b_dynamic_routing = self.placeholders["b_dynamic_routing"]
        
    
        delta_IJ = tf.zeros([self.batch_size, self.caps1_num_caps, num_outputs, 1, 1], dtype=tf.dtypes.float32)

        primary_static_caps = tf.tile(primary_static_caps, [1, 1, num_dims * num_outputs, 1, 1])

        u_hat = tf.reduce_sum(w_dynamic_routing * primary_static_caps, axis=3, keep_dims=True)
        u_hat = tf.reshape(u_hat, shape=[-1, self.caps1_num_caps, num_outputs, num_dims, 1])

        u_hat_stopped = tf.stop_gradient(u_hat, name='stop_gradient')

        for r_iter in range(self.iter_routing):
            with tf.variable_scope('iter_' + str(r_iter)):
                gamma_IJ = tf.nn.softmax(delta_IJ, axis=2)

                if r_iter == self.iter_routing - 1:
                    s_J = tf.multiply(gamma_IJ, u_hat)
                    s_J = tf.reduce_sum(s_J, axis=1, keepdims=True) + b_dynamic_routing
                    v_J = self.squash(s_J)
                elif r_iter < self.iter_routing - 1:  # Inner iterations, do not apply backpropagation
                    s_J = tf.multiply(gamma_IJ, u_hat_stopped)
                    s_J = tf.reduce_sum(s_J, axis=1, keepdims=True) + b_dynamic_routing
                    v_J = self.squash(s_J)
                    v_J_tiled = tf.tile(v_J, [1,self.caps1_num_caps, 1, 1, 1])
                    u_produce_v = tf.reduce_sum(u_hat_stopped * v_J_tiled, axis=3, keepdims=True)
                    delta_IJ += u_produce_v

        return(v_J)

    def vts_routing(self, input, top_a, top_b, num_outputs, num_dims):
        """The proposed Variable-to-Static Routing Algorithm."""

        alpha_IJ = tf.zeros((int(num_outputs/top_a*top_b), num_outputs), dtype=tf.float32)
        input = tf.transpose(input,perm=[0,2,3,1])
        u_i,_ = tf.nn.top_k(input,k=top_b)
        u_i = tf.transpose(u_i,perm=[0,3,1,2])
        u_i = tf.reshape(u_i, (-1, num_dims))
        u_i = tf.stop_gradient(u_i)
        
        input,_ = tf.nn.top_k(input,k=top_a)
        input = tf.transpose(input,perm=[0,3,1,2])
        v_J = input
        v_J = tf.reshape(v_J, (-1, num_dims))
            
        for rout in range(1):
            u_produce_v = tf.matmul(u_i, v_J,transpose_b=True)
            alpha_IJ += u_produce_v
            beta_IJ = tf.nn.softmax(alpha_IJ,axis=-1)
            v_J = tf.matmul(beta_IJ,u_i,transpose_a=True)
        
        v_J = tf.reshape(v_J,(1, num_outputs, num_dims, 1))
        return self.squash(v_J)

   
    
    def primary_variable_capsule_layer(self, num_conv, output_size, parent_node_embeddings, children_embeddings, children_indices, node_dim, num_dims):
        """The proposed Primary Variable Capsule Layer."""
    
        with tf.name_scope('primary_variable_capsule_layer'):
            nodes = [
                tf.expand_dims(self.conv_node(parent_node_embeddings, children_embeddings, children_indices, node_dim, output_size),axis=-1)
                for _ in range(num_conv)
            ]    
            conv_output = tf.concat(nodes, axis=-1)
            primary_variable_capsules = tf.reshape(conv_output,shape=(1,-1,output_size,num_conv))
            return primary_variable_capsules


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

   