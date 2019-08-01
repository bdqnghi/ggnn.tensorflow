import argparse
import random

import gzip
import pycurl
import pickle

import tensorflow as tf
from utils.data.dataset import MonoLanguageProgramData
from utils.data.dataset import load_single_program
from utils.utils import ThreadedIterator
from utils.utils import scale_attention_score_by_group
from utils.dense_ggnn import DenseGGNNModel
import os
import sys

import math
import copy
import operator
import numpy as np
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score
# traverses vertices reachable from s. 
from collections import defaultdict 
from itertools import combinations
import copy



all_solutions = []

def fetch_data_from_github(filename):
    if not os.path.exists(os.path.dirname(filename)):
        os.makedirs(os.path.dirname(filename))
    fp = open(filename, "wb") 
    curl = pycurl.Curl()
    curl.setopt(pycurl.URL, os.path.join("https://raw.githubusercontent.com/bdqnghi/ggnn.tensorflow/master", filename))
    curl.setopt(pycurl.WRITEDATA, fp)
    curl.perform()
    curl.close()
    fp.close()   

def delete_component_with_id(component_id, pb_path):

    delete_stmt_path_pb = os.path.join(pb_path.split(".")[0] + "_st_" + str(component_id) + ".pb")
    delete_stmt_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast --delete_tree=" + str(component_id) + " " + pb_path + " " + delete_stmt_path_pb
    os.system(delete_stmt_cmd)

    return delete_stmt_path_pb

def delete_component_with_ids(component_ids, pb_path):
    component_ids = list(component_ids)
    delete_stmt_path_pb = delete_component_with_id(component_ids[0], pb_path)
    for i in range(1, len(component_ids)):
        delete_stmt_path_pb = delete_component_with_id(component_ids[i], delete_stmt_path_pb)
    return delete_stmt_path_pb

def find_top_b_components(component_scores_dict, beam_size, reverse=False):
    # reverse = True for top highest, reverse = False for top lowest
    component_scores_dict_sorted = sorted(component_scores_dict.items(), key=operator.itemgetter(1), reverse=reverse)
    component_ids = []
    for c in component_scores_dict_sorted[:beam_size]:
        component_ids.append(c[0])
    return component_ids

def generate_pb_file(test_file_path):
    print("Generating pb with src_path : " + test_file_path)
    pb_path = os.path.join(test_file_path.split(".")[0] + ".pb")
    if not os.path.exists(pb_path):
        cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -p " + test_file_path + " " + pb_path
        os.system(cmd)
    return pb_path

def check_if_node_visited(node, visited_nodes):
    check = False
    for visited_node in visited_nodes:
        if node == visited_node:
            check = True
            break

    return check


def beam_search(opt, ggnn, sess, original_pb_path, component_scores_dict, correct_label, beam_size):
    print(component_scores_dict)
    candidate_components = find_top_b_components(component_scores_dict, beam_size, False)
    print("Candidate components : " + str(candidate_components))

    visited_nodes = list()
    visited = []
    queue = []
    # node = []
    solutions = []

    for c in candidate_components:
        queue.append([c])

        # visited_nodes.append(set([c]))

    while queue:
        visited_node = queue.pop(0)
        
        print("Visited so far : " + str(visited_nodes))
        print("Soluttions so far : " + str(solutions))
        ###################
        if not check_if_node_visited(set(visited_node), visited_nodes):
            temp_pb_path = delete_component_with_ids(visited_node,original_pb_path)
            temp_raw_code_path = temp_pb_path.split(".")[0] + "_raw_temp" + ".java"
            
            fbs_path =  temp_pb_path.split(".")[0] + ".fbs"
            graph_dumb = temp_pb_path.split(".")[0] + "_train.txt"
            graph_path = temp_pb_path.split(".")[0] + ".txt"

            component_to_code_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast" + " " + temp_pb_path + " " + temp_raw_code_path
            fbs_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G " + temp_raw_code_path + " " + fbs_path
            ggnn_cmd = "docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast " + fbs_path + " " + graph_dumb + " " + graph_path

            if not os.path.exists(temp_raw_code_path):
                os.system(component_to_code_cmd)

            if os.stat(temp_raw_code_path).st_size > 0:
                if not os.path.exists(fbs_path):
                    os.system(fbs_cmd)
                if not os.path.exists(graph_path):
                    os.system(ggnn_cmd)
                  
                
                predicted_label = making_prediction(graph_path, opt, ggnn, sess)
                print("Label for components "  + str(visited_node) + " is " + str(predicted_label))
                print("correct_label : " + str(correct_label))
                ##################
                if not check_if_node_visited(set(visited_node), visited_nodes):
                    visited_nodes.append(set(visited_node))

                if int(correct_label) == int(predicted_label):

                    temp_component_scores_dict = copy.deepcopy(component_scores_dict)
                    for s in visited_node:
                        temp_component_scores_dict.pop(s, None)

                    temp_candidate_components = find_top_b_components(temp_component_scores_dict, beam_size)
                    for component in temp_candidate_components:
                        # visited.append(component)
                        node = []
                        # Visiting the next node
                        node.extend(visited_node)
                        node.append(component)

                        # if not check_if_node_visited(set(node), visited_nodes):
                        queue.append(node)

                       

                else:
                    solutions.append(visited_node)

    print("All solutions.........")
    print(solutions)

    longest_solution = max(solutions, key=len)

    print(longest_solution)

    

   
        # temp_pb_path = delete_component_with_id(component,original_pb_path)
        # fbs_path =  original_test_file_path.split(".")[0] + ".fbs"
        # graph_dumb = original_test_file_path.split(".")[0] + "_train.txt"
        # graph_path = original_test_file_path.split(".")[0] + ".txt"
        # fbs_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G " + original_test_file_path + " " + fbs_path
        # ggnn_cmd = "docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast " + fbs_path + " " + graph_dumb + " " + graph_path
        # os.system(fbs_cmd)
        # os.system(ggnn_cmd)
        # predicted_label = making_prediction(graph_path, opt, ggnn, sess)
        # print("Label for components "  + str(solution) + " is " + str(predicted_label))
        # print("correct_label : " + str(correct_label))


        # if int(correct_label) == int(predicted_label):
          
                
            
            # beam_search(opt, ggnn, sess, original_test_file_path, temp_pb_path, component_scores_dict, correct_label, solution, beam_size)
     




def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--workers', type=int, help='number of data loading workers', default=2)
    parser.add_argument('--train_batch_size', type=int, default=10, help='input batch size')
    parser.add_argument('--test_batch_size', type=int, default=5, help='input batch size')
    parser.add_argument('--state_dim', type=int, default=30, help='GGNN hidden state dimension size')
    parser.add_argument('--node_dim', type=int, default=100, help='node dimension size')
    parser.add_argument('--hidden_layer_size', type=int, default=200, help='size of hidden layer')
    parser.add_argument('--num_hidden_layer', type=int, default=1, help='number of hidden layer')
    parser.add_argument('--n_steps', type=int, default=10, help='propogation steps number of GGNN')
    parser.add_argument('--lr', type=float, default=0.001, help='learning rate')
    parser.add_argument('--cuda', action='store_true', help='enables cuda')
    parser.add_argument('--verbal', type=bool, default=True, help='print training info or not')
    parser.add_argument('--manualSeed', type=int, help='manual seed')
    parser.add_argument('--test_file', default="program_data/test_data/5/100_dead_code_1.java", help="test program")
    parser.add_argument('--n_classes', type=int, default=10, help='manual seed')
    parser.add_argument('--path', default="program_data/github_java_sort_function_babi", help='program data')
    parser.add_argument('--model_path', default="model", help='path to save the model')
    parser.add_argument('--n_hidden', type=int, default=50, help='number of hidden layers')
    parser.add_argument('--size_vocabulary', type=int, default=59, help='maximum number of node types')
    parser.add_argument('--log_path', default="logs/" ,help='log path for tensorboard')
    parser.add_argument('--aggregation', type=int, default=1, choices=range(0,4), help='0 for max pooling, 1 for attention with sum pooling, 2 for attention with max pooling, 3 for attention with average pooling')
    parser.add_argument('--distributed_function', type=int, default=0, choices=range(0,2), help='0 for softmax, 1 for sigmoid')
    parser.add_argument('--pretrained_embeddings_url', default="embedding/fast_pretrained_vectors.pkl.gz", help='pretrained embeddings url, there are 2 objects in this file, the first object is the embedding matrix, the other is the lookup dictionary')
    parser.add_argument('argv', nargs="+", help='filenames')
    opt = parser.parse_args()

    if len(opt.argv) == 1:
        opt.test_file = opt.argv[0]

    # Load pretrained embeddings
    with gzip.open(opt.pretrained_embeddings_url, 'rb') as fh:
        embeddings, embed_lookup = pickle.load(fh,encoding='latin1')
        opt.pretrained_embeddings = embeddings
        opt.pretrained_embed_lookup = embed_lookup

    # Generate necessary files
    opt.model_path = os.path.join(opt.model_path,"sum_softmax" + "_hidden_layer_size_" + str(opt.hidden_layer_size) + "_num_hidden_layer_"  + str(opt.num_hidden_layer)) + "_node_dim_" + str(opt.node_dim)
    opt.pb_path = generate_pb_file(opt.test_file)

    components_attention_scores_path = os.path.join(opt.test_file.split(".")[0] + "_component_ids.csv")

    print(components_attention_scores_path)
    component_scores_dict = {}
    with open(components_attention_scores_path,"r") as f:
        data = f.readlines()
        for line in data:
            split = line.replace("\n","").split(",")
            component_scores_dict[int(split[0])] = float(split[1]) 
    print(component_scores_dict)
    # Init the model
    checkfile = os.path.join(opt.model_path, 'cnn_tree.ckpt')    
    ckpt = tf.train.get_checkpoint_state(opt.model_path)
  
    # opt.n_edge_types = test_dataset.n_edge_types
    opt.n_edge_types = 7
    ggnn = DenseGGNNModel(opt)
    saver = tf.train.Saver(save_relative_paths=True, max_to_keep=5)
    init = tf.global_variables_initializer()

   

    with tf.Session() as sess:
        sess.run(init)

        if ckpt and ckpt.model_checkpoint_path:
            print("Continue training with old model")
            print("Checkpoint path : " + str(ckpt.model_checkpoint_path))
            saver.restore(sess, ckpt.model_checkpoint_path)
            for i, var in enumerate(saver._var_list):
                print('Var {}: {}'.format(i, var))

            
        solution = []
        beam_size = 2
        beam_search(opt, ggnn, sess, opt.pb_path, component_scores_dict, 4, beam_size)
            
        # print(all_solutions)
def making_prediction(graph_path, opt, ggnn, sess):

     # For debugging purpose
    softmax_values = ggnn.softmax_values
    attention_scores = ggnn.attention_scores
    opt.test_graph_path = graph_path
   
    test_dataset = MonoLanguageProgramData(opt, False, False, True)

    batch_iterator = ThreadedIterator(test_dataset.make_minibatch_iterator(), max_queue_size=5)

  
    for step, batch_data in enumerate(batch_iterator):
        # print(batch_data["labels"])

        print(batch_data['labels'])
        softmax_values_data, attention_scores_data = sess.run(
            [softmax_values, attention_scores],
            feed_dict={
                ggnn.placeholders["initial_node_representation"]: batch_data["initial_representations"],
                ggnn.placeholders["num_vertices"]: batch_data["num_vertices"],
                ggnn.placeholders["adjacency_matrix"]:  batch_data['adjacency_matrix'],
                ggnn.placeholders["labels"]:  batch_data['labels']
            }
        )

       
        predicted_label = np.argmax(softmax_values_data,axis=1)
      

        print("Probability : " + str(softmax_values_data))
        print("Probability max : " + str(np.argmax(softmax_values_data,axis=1)))
    

    
    return predicted_label[0]

if __name__ == "__main__":
    main()
