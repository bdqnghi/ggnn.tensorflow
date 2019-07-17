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


def generate_graph_file(test_file_path):
    fbs_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G " + test_file_path + " " + test_file_path.split(".")[0] + ".fbs"
    ggnn_cmd = "docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast " + test_file_path.split(".")[0] + ".fbs" + " " + test_file_path.split(".")[0] + "_train.txt" + " " + test_file_path.split(".")[0] + ".txt"

    print(ggnn_cmd)
    os.system(fbs_cmd)
    os.system(ggnn_cmd)

    graph_path = test_file_path.split(".")[0] + ".txt"
    return graph_path

def generate_statements_file(pb_path, statement_type, output_path):
    
    generate_stmt_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast --node_types=" + statement_type + " " + pb_path + " " + "temp.pb" + " > " + output_path
    print(generate_stmt_cmd)
    os.system(generate_stmt_cmd)
    # return stmt_ids_path

def generate_pb_file(test_file_path):
    print("Generating pb with src_path : " + test_file_path)
    pb_path = os.path.join(test_file_path.split(".")[0] + ".pb")
    if not os.path.exists(pb_path):
        cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -p " + test_file_path + " " + pb_path
        os.system(cmd)
    return pb_path

# def break_statements()


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

    # Create model path folder if not exists
    opt.model_path = os.path.join(opt.model_path,"sum_softmax" + "_hidden_layer_size_" + str(opt.hidden_layer_size) + "_num_hidden_layer_"  + str(opt.num_hidden_layer)) + "_node_dim_" + str(opt.node_dim)
    
    opt.test_graph_path = generate_graph_file(opt.test_file)
    opt.pb_path = generate_pb_file(opt.test_file)
    # generate_graph_files(opt)
    # print(stmt_ids_path)

    single_stmt_ids_path = os.path.join(opt.pb_path.split(".")[0] + "_expr_stmt_ids.txt")
    generate_statements_file(opt.pb_path, "statements_single.csv",single_stmt_ids_path )
    

    condition_stmt_ids_path = os.path.join(opt.pb_path.split(".")[0] + "_condition_stmt_ids.txt")
    generate_statements_file(opt.pb_path, "statements_condition.csv",condition_stmt_ids_path)

    single_stmt_ids_path.extend(condition_stmt_ids_path)
    all_stmt_ids_path =  single_stmt_ids_path

    



if __name__ == "__main__":
    main()
