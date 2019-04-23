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

import copy
import operator
import numpy as np
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score

def generate_visualization(pb_path, scaled_attention_path, output_path):
    # attention_path = os.path.join(pb_path.split(".")[0] + ".csv")
    
    normal_node_id_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -H 0 -t -x " + scaled_attention_path + " " + pb_path  + " > " + output_path
    os.system(normal_node_id_cmd)
    # return normal_html_path

def generate_statement_file(pb_path):
    stmt_ids_path = os.path.join(pb_path.split(".")[0] + "_stmt_ids.txt")
    generate_stmt_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast --node_types=statements.csv " + pb_path + " " + "temp.pb" + " > " + stmt_ids_path
    os.system(generate_stmt_cmd)
    return stmt_ids_path

def delete_statements(stmt_ids_path, pb_path):

    stmt_java_paths = []
    stmt_ids = []
    with open(stmt_ids_path,"r") as f:
        data = f.readlines()
        for line in data:
            stmt_ids.append(line.replace("\n",""))

    for stmt_id in stmt_ids:

        delete_stmt_path_pb = os.path.join(pb_path.split(".")[0] + "_st_" + stmt_id + ".pb")
        delete_stmt_path_code = os.path.join(pb_path.split(".")[0] + "_st_" + stmt_id + ".java")
        delete_stmt_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast --delete_tree=" + stmt_id + " " + pb_path + " " + delete_stmt_path_pb
        stmt_to_java_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast" + " " + delete_stmt_path_pb + " " + delete_stmt_path_code
    
        os.system(delete_stmt_cmd)
        os.system(stmt_to_java_cmd)

        stmt_java_paths.append(delete_stmt_path_code)

    return stmt_java_paths

def generate_graph_files(opt):
    path = opt.test_file
    fbs_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G " + path + " " + path.split(".")[0] + ".fbs"
    ggnn_cmd = "docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast " + path.split(".")[0] + ".fbs" + " " + path.split(".")[0] + "_train.txt" + " " + path.split(".")[0] + ".txt"

    print(ggnn_cmd)
    os.system(fbs_cmd)
    os.system(ggnn_cmd)

    opt.test_graph_path = path.split(".")[0] + ".txt"

def generate_pb(src_path):
    print("Generating pb with src_path : " + src_path)
    pb_path = os.path.join(src_path.split(".")[0] + ".pb")
    # if not os.path.exists(src_path):
    cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -p " + src_path + " " + pb_path
    os.system(cmd)
    return pb_path

def generate_files(opt):
    generate_graph_files(opt)
    pb_path = generate_pb(opt.test_file)
    opt.pb_path = pb_path
    return pb_path

def generate_subtree(opt, stmt_ids_path,  attention_score_dict):
    # print(attention_score_dict)
    # print(len(attention_score_dict.keys()))
    clone_attention_score_dict = copy.deepcopy(attention_score_dict)
    subtree_score_dict = {}
    pb_path = opt.pb_path
    stmt_ids = []
    with open(stmt_ids_path,"r") as f:
        data = f.readlines()
        for line in data:
            stmt_ids.append(line.replace("\n",""))

    for stmt_id in stmt_ids:
        subtree_ids_path =   os.path.join(pb_path.split(".")[0] + "_subtree_" + str(stmt_id) + ".csv")
        generate_subtree_ids_cmd = "docker run -v $(pwd):/e yijun/fast -CA " +  str(stmt_id) + " " + pb_path + " > " + subtree_ids_path        
        os.system(generate_subtree_ids_cmd)
      
        with open(subtree_ids_path,"r") as f1:
            data = f1.readlines()
            subtree_score = 0
            for line in data:
                subtree_id = int(line.replace("\n",""))
                score = attention_score_dict[subtree_id]
                subtree_score += score

            for line in data:
                subtree_id = int(line.replace("\n",""))
                clone_attention_score_dict[subtree_id] = subtree_score

            subtree_score_dict[int(stmt_id)] = subtree_score

    attention_score_hierrachical_path = os.path.join(opt.test_file.split(".")[0] + "_hierarchical.csv")
    print(clone_attention_score_dict)
    if os.path.exists(attention_score_hierrachical_path):
        os.remove(attention_score_hierrachical_path)
    for node_id, score in clone_attention_score_dict.items():
        line = str(node_id) + "," + str(score)

        with open(attention_score_hierrachical_path,"a") as f2:
            f2.write(line)
            f2.write("\n")

    html_path = os.path.join(attention_score_hierrachical_path.split(".")[0] + "_hierarchical.html")
    hierrachical_scaled_attention_path = os.path.join(opt.test_file.split(".")[0] + "_hierrachical_scaled.csv")

    scaled_attention_scores(clone_attention_score_dict, hierrachical_scaled_attention_path)
    generate_visualization(pb_path, hierrachical_scaled_attention_path, html_path)
    return clone_attention_score_dict, subtree_score_dict

def scaled_attention_scores(attention_score_map, scaled_attention_output_path):
    attention_score_sorted = sorted(attention_score_map.items(), key=operator.itemgetter(1))
    attention_score_sorted.reverse()

    node_ids = []
    attention_scores = []
    raw_attention_score_dict = {}
    for element in attention_score_sorted:
        node_ids.append(element[0])
        attention_scores.append(element[1])
        raw_attention_score_dict[element[0]] = element[1]
    attention_score_scaled = scale_attention_score_by_group(attention_scores)

    attention_score_scaled_map = {}
    for i, score in enumerate(attention_score_scaled):
        key = str(node_ids[i])
        attention_score_scaled_map[key] = float(score)

    # scaled_attention_path = os.path.join(opt.test_file.split(".")[0] + "_scaled.csv")
    if os.path.exists(scaled_attention_output_path):
        os.remove(scaled_attention_output_path)

    with open(scaled_attention_output_path,"a") as f:
        for k, v in attention_score_scaled_map.items():
            f.write(str(k) + "," + str(v))
            f.write("\n")

def generate_attention_scores(opt, attention_scores):
    attention_score_map = {}
    for i, score in enumerate(attention_scores):
        attention_score_map[i] = float(score)

    attention_score_sorted = sorted(attention_score_map.items(), key=operator.itemgetter(1))
    attention_score_sorted.reverse()

    node_ids = []
    attention_scores = []
    raw_attention_score_dict = {}
    for element in attention_score_sorted:
        node_ids.append(element[0])
        attention_scores.append(element[1])
        raw_attention_score_dict[element[0]] = element[1]
    attention_score_scaled = scale_attention_score_by_group(attention_scores)

    attention_score_scaled_map = {}
    for i, score in enumerate(attention_score_scaled):
        key = str(node_ids[i])
        attention_score_scaled_map[key] = float(score)

    scaled_attention_path = os.path.join(opt.test_file.split(".")[0] + "_scaled.csv")
    if os.path.exists(scaled_attention_path):
        os.remove(scaled_attention_path)

    with open(scaled_attention_path,"a") as f:
        for k, v in attention_score_scaled_map.items():
            f.write(str(k) + "," + str(v))
            f.write("\n")

    raw_attention_path = os.path.join(opt.test_file.split(".")[0] + "_raw.csv")
    if os.path.exists(raw_attention_path):
        os.remove(raw_attention_path)

    with open(raw_attention_path,"a") as f:
        for k, v in raw_attention_score_dict.items():
            f.write(str(k) + "," + str(v))
            f.write("\n")
     
    return scaled_attention_path, raw_attention_path, raw_attention_score_dict

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
    parser.add_argument('--node_dim', type=int, default=200, help='node dimension size')
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
    parser.add_argument('--model_path', default="model/sum_softmax_hidden_layer_size_200_num_hidden_layer_1_node_dim_200", help='path to save the model')
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
    if not os.path.exists(opt.model_path):
        os.makedirs(opt.model_path)
    
    pb_path = generate_files(opt)

    stmt_ids_path = generate_statement_file(pb_path)
    opt.stmt_ids_path = stmt_ids_path
    statement_paths = delete_statements(stmt_ids_path, pb_path)
   

    if not os.path.exists(opt.pretrained_embeddings_url):
        fetch_data_from_github(opt.pretrained_embeddings_url)
    with gzip.open(opt.pretrained_embeddings_url, 'rb') as fh:
        embeddings, embed_lookup = pickle.load(fh,encoding='latin1')
        opt.pretrained_embeddings = embeddings
        opt.pretrained_embed_lookup = embed_lookup

    checkfile = os.path.join(opt.model_path, 'cnn_tree.ckpt')    
    for f in ['checkpoint', 'cnn_tree.ckpt.index', 'cnn_tree.ckpt.meta', 'cnn_tree.ckpt.data-00000-of-00001']:
        filename = os.path.join(opt.model_path, f)
        if not os.path.exists(filename):
            fetch_data_from_github(filename)

    ckpt = tf.train.get_checkpoint_state(opt.model_path)
    
    test_dataset = MonoLanguageProgramData(opt, False, False, True)
    opt.n_edge_types = test_dataset.n_edge_types

    ggnn = DenseGGNNModel(opt)

    
    original_file = opt.test_file

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

    
            original_softmax_values_data, _, correct_label , prediction = making_prediction(test_dataset, ggnn, sess, opt, True)
            subtree_score_dict = opt.subtree_score_dict 

            statement_test_file = os.path.join(original_file + "_statement_test.csv")

            if os.path.exists(statement_test_file):
                os.remove(statement_test_file)
            with open(statement_test_file,"a") as f:
                line = original_file + ";" + str(original_softmax_values_data[0].tolist()) + ";" + correct_label + ";" + prediction + ";"
                f.write(line)
                f.write("\n")


            for stmt_path in statement_paths:
                opt.test_file = stmt_path

                splits = stmt_path.split("_")
                stmt_id = splits[len(splits)-1].replace(".csv","").replace(".java","")
                score = subtree_score_dict[int(stmt_id)]
                generate_files(opt)
               
                test_dataset = MonoLanguageProgramData(opt, False, False, True)
                opt.n_edge_types = test_dataset.n_edge_types
                softmax_values_data, argmax, correct_label, prediction = making_prediction(test_dataset, ggnn, sess, opt, False)
                
                

                delta = original_softmax_values_data[0][int(correct_label)] - softmax_values_data[0][int(correct_label)]

                with open(statement_test_file,"a") as f:
                    line = stmt_path + ";" + str(softmax_values_data[0].tolist()) + ";" + correct_label + ";" + prediction + ";" + str(delta) + ";" + str(score)
                    f.write(line)
                    f.write("\n")

    # print(train_dataset.bucketed)

def making_prediction(test_dataset, ggnn, sess, opt, original=False):

     # For debugging purpose
    nodes_representation = ggnn.nodes_representation
    graph_representation = ggnn.graph_representation
    logits = ggnn.logits
    softmax_values = ggnn.softmax_values
    attention_scores = ggnn.attention_scores

    batch_iterator = ThreadedIterator(test_dataset.make_minibatch_iterator(), max_queue_size=5)

    correct_labels = []
    predictions = []
    print("--------------------------------------")
    print('Computing training accuracy...')

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

        
        # print(attention_scores_data)
        # print(len(attention_scores_data[0]))
        
        correct_labels.extend(np.argmax(batch_data['labels'],axis=1))
        argmax = np.argmax(softmax_values_data,axis=1)
        predictions.extend(np.argmax(softmax_values_data,axis=1))

    print("Probability : " + str(softmax_values_data))
    print("Probability max : " + str(np.argmax(softmax_values_data,axis=1)))
    print("Correct class " + str(correct_labels[0]))
    print("Predicted class : " + str(predictions[0]))

    scaled_attention_path, raw_attention_path, raw_attention_score_dict = generate_attention_scores(opt, attention_scores_data[0])

    html_path = os.path.join(scaled_attention_path.split(".")[0] + ".html")
    generate_visualization(opt.pb_path,scaled_attention_path,html_path)

    if original:
        modified_attention_score_dict, subtree_score_dict = generate_subtree(opt, opt.stmt_ids_path, raw_attention_score_dict)
        opt.subtree_score_dict = subtree_score_dict
    # print(attention_path)
    # print(opt.pb_path)

    return softmax_values_data, argmax, str(correct_labels[0]), str(predictions[0])

if __name__ == "__main__":
    main()
