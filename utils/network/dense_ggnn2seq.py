#!/usr/bin/env/python


from typing import Sequence, Any
from collections import defaultdict
import numpy as np
import tensorflow as tf
import sys, traceback
import pdb
import json

from utils.utils import glorot_init
from dense_ggnn_method_name_prediction import DenseGGNNModel


class DenseGGNN2Seq(DenseGGNNModel):
    def __init__(self, opt):

    def decoding_layer_train(encoder_state, dec_cell, dec_embed_input, 
                         target_sequence_length, max_summary_length, 
                         output_layer, keep_prob):
        """
        Create a training process in decoding layer 
        :return: BasicDecoderOutput containing training logits and sample_id
        """
        dec_cell = tf.contrib.rnn.DropoutWrapper(dec_cell, 
                                                output_keep_prob=keep_prob)
        
        # for only input layer
        helper = tf.contrib.seq2seq.TrainingHelper(dec_embed_input, 
                                                target_sequence_length)
        
        decoder = tf.contrib.seq2seq.BasicDecoder(dec_cell, helper, encoder_state, output_layer)

        # unrolling the decoder layer
        outputs, _, _ = tf.contrib.seq2seq.dynamic_decode(decoder, 
                                                        impute_finished=True, 
                                                        maximum_iterations=max_summary_length)
        return outputs

    def decoding_layer_infer(encoder_state, dec_cell, dec_embeddings, start_of_sequence_id,
                         end_of_sequence_id, max_target_sequence_length,
                         vocab_size, output_layer, batch_size, keep_prob):
        """
        Create a inference process in decoding layer 
        :return: BasicDecoderOutput containing inference logits and sample_id
        """
        dec_cell = tf.contrib.rnn.DropoutWrapper(dec_cell, 
                                                output_keep_prob=keep_prob)
        
        helper = tf.contrib.seq2seq.GreedyEmbeddingHelper(dec_embeddings, 
                                                        tf.fill([batch_size], start_of_sequence_id), 
                                                        end_of_sequence_id)
        
        decoder = tf.contrib.seq2seq.BasicDecoder(dec_cell, helper, encoder_state, output_layer)
        outputs, _, _ = tf.contrib.seq2seq.dynamic_decode(decoder, 
                                                        impute_finished=True, 
                                                        maximum_iterations=max_target_sequence_length)
        return outputs

    def decoding_layer(dec_input, encoder_state,
                   target_sequence_length, max_target_sequence_length,
                   rnn_size,
                   num_layers, target_vocab_to_int, target_vocab_size,
                   batch_size, keep_prob, decoding_embedding_size):
        """
        Create decoding layer
        :return: Tuple of (Training BasicDecoderOutput, Inference BasicDecoderOutput)
        """
        target_vocab_size = len(target_vocab_to_int)
        dec_embeddings = tf.Variable(tf.random_uniform([target_vocab_size, decoding_embedding_size]))
        dec_embed_input = tf.nn.embedding_lookup(dec_embeddings, dec_input)
        
        cells = tf.contrib.rnn.MultiRNNCell([tf.contrib.rnn.LSTMCell(rnn_size) for _ in range(num_layers)])
        
        with tf.variable_scope("decode"):
            output_layer = tf.layers.Dense(target_vocab_size)
            train_output = decoding_layer_train(encoder_state, 
                                                cells, 
                                                dec_embed_input, 
                                                target_sequence_length, 
                                                max_target_sequence_length, 
                                                output_layer, 
                                                keep_prob)

        with tf.variable_scope("decode", reuse=True):
            infer_output = decoding_layer_infer(encoder_state, 
                                                cells, 
                                                dec_embeddings, 
                                                target_vocab_to_int['<GO>'], 
                                                target_vocab_to_int['<EOS>'], 
                                                max_target_sequence_length, 
                                                target_vocab_size, 
                                                output_layer,
                                                batch_size,
                                                keep_prob)

        return (train_output, infer_output)