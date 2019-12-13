import numpy as np
import os
from os import listdir
from os.path import isfile, join
import collections
import re
from tqdm import trange
from tqdm import *
import random
#import pickle
import pyarrow
from collections import defaultdict

def load_graphs_from_file(file_name):
    data_list = []
    edge_list = []
    target_list = []
    
    with open(file_name,'r') as f:
        for line in f:
            if len(line.strip()) == 0:
                data_list.append([edge_list,target_list])
                edge_list = []
                target_list = []
            else:
                digits = []
                line_tokens = line.split(" ")

                if line_tokens[0] == "?":
                    for i in range(1, len(line_tokens)):
                        
                        digits.append(int(line_tokens[i]))
                    target_list.append(digits)
                else:
                    for i in range(len(line_tokens)):
                        digits.append(int(line_tokens[i]))
                    edge_list.append(digits)
    # print(data_list)
    return data_list


def lookup_vector(node_type, embeddings):
    # look_up_vector = embed_loopkup[node_type]

    nodes.append(embeddings[int(n)])


def process_token(token):
    excluded_tokens = [",","{",";","}",")","(",'"',"'","`",""," "]
    for t in excluded_tokens:
        token = token.replace(t,"")
    return token

def load_program_graphs_from_directory(directory, label_lookup, node_type_lookup, node_token_lookup, is_training=True, is_testing=True):

    node_id_data_list = []
    node_type_data_list = []
    node_token_data_list = []
    print(directory)
    for subdir , dirs, files in os.walk(directory):
        for file in files:
            print(file)
            raw_file_path = os.path.join(subdir,file)
            name_splits = file.split(".")
            method_name = name_splits[0].split("_")[1]
            label_id = int(label_lookup[method_name])
            with open(raw_file_path,"r") as f:
                lines = f.readlines()
                node_id_edge_per_class = []
                node_type_edge_per_class = []
                node_token_edge_per_class = []
                for line in lines:
                    try:
                        line = line.replace("\n","")
                        line = line.replace("'","")
                        line = " ".join(line.split())

                        splits = line.split(" ")
                        source = splits[0]
                        edge = splits[1]
                        sink = splits[2]

                        source_splits = source.split(",")
                        source_node_id = source_splits[0].split(":")[0]
                        source_node_type = source_splits[0].split(":")[1]
                        source_node_type_id = node_type_lookup[source_node_type]

                        source_token = "captain_america"
                        sink_token = "captain_america"

                        if len(source_splits) == 2:
                            source_token = source_splits[1]
                            source_token = process_token(source_token)

                        sink_splits = sink.split(",")
                        sink_node_id = sink_splits[0].split(":")[0]
                        sink_node_type = sink_splits[0].split(":")[1]
                        sink_node_type_id = node_type_lookup[sink_node_type]
                        if len(sink_splits) == 2:
                            sink_token = sink_splits[1]
                            sink_token = process_token(sink_token)

                        source_token_id = node_token_lookup[source_token]
                        sink_token_id = node_token_lookup[sink_token]

                        node_id_edge = [int(source_node_id), int(edge), int(sink_node_id)]
                        node_type_edge = [int(source_node_type_id), int(edge), int(sink_node_type_id)]
                        node_token_edge = [int(source_token_id), int(edge), int(sink_token_id)]

                        # node_id_edge_with_label = [node_id_edge, [label_id]]
                        # node_type_edge_with_label = [node_type_edge, [label_id]]
                        # node_token_edge_with_label = [node_token_edge, [label_id]]

                        node_id_edge_per_class.append(node_id_edge)
                        node_type_edge_per_class.append(node_type_edge)
                        node_token_edge_per_class.append(node_token_edge)
                    except Exception as e:
                        print(e)


            node_id_data_list.append([node_id_edge_per_class, label_id])
            node_type_data_list.append([node_type_edge_per_class, label_id])
            node_token_data_list.append([node_token_edge_per_class, label_id])
       
    return node_id_data_list, node_type_data_list, node_token_data_list

def load_single_program(path):
  
    node_id_data_list_class_i = []
    node_type_data_list_class_i = []
    node_id_edge_list_class_i = []
    node_type_edge_list_class_i = []
    target_list_class_i = []

    # print("--------------------------")
    with open(path,'r') as f:
        for line in f: 
            if len(line.strip()) == 0:
                # print(edge_list_class_i)
                node_id_data_list_class_i.append([node_id_edge_list_class_i,target_list_class_i])
                node_type_data_list_class_i.append([node_type_edge_list_class_i,target_list_class_i])
                node_id_edge_list_class_i = []
                node_type_edge_list_class_i = []
                target_list_class_i = []
            else:
                node_id_digits = []
                node_type_digits = []
                line_tokens = line.split(" ")
                
                if line_tokens[0] == "?":
                    # print(label)
                    splits = line_tokens[2].split("/")
                    print(splits)
                    try: 
                        label = int(splits[len(splits)-2])
                    except:
                        label = 1 # in case the file is not in a folder, assume it to be in the 1st cluster

                    target_list_class_i.append([label])
                else:

                    for j in range(len(line_tokens)):
                        if "," in line_tokens[j]:
                            splits = line_tokens[j].split(",")
                            node_id = splits[0]
                            node_type = splits[1]
                            node_id_digits.append(int(node_id))
                            node_type_digits.append(int(node_type))
                        else:
                            node_id_digits.append(int(line_tokens[j]))
                            node_type_digits.append(int(line_tokens[j]))

                    node_id_edge_list_class_i.append(node_id_digits)
                    node_type_edge_list_class_i.append(node_type_digits)
    # print(node_id_data_list_class_i)
    return node_id_data_list_class_i, node_type_data_list_class_i

def find_max_edge_id(data_list):
    max_edge_id = 0
    for data in data_list:
        edges = data[0]
        for item in edges:
            if item[1] > max_edge_id:
                max_edge_id = item[1]
    return max_edge_id

def find_max_node_id(data_list):
    max_node_id = 0
    for data in data_list:
        edges = data[0]
        for item in edges:

            if item[0] > max_node_id:
                max_node_id = item[0]
            if item[2] > max_node_id:
                max_node_id = item[2]
    return max_node_id

def find_min_node_id(data_list):
    min_node_id = 0
    for data in data_list:
        edges = data[0]
        for item in edges:

            if item[0] < min_node_id:
                min_node_id = item[0]
            if item[2] < min_node_id:
                min_node_id = item[2]
    return min_node_id
    # return 48

def find_num_nodes_of_graph(graph):
    max_node_id = 0
    for item in graph:
        if item[0] > max_node_id:
            max_node_id = item[0]
        if item[2] > max_node_id:
            max_node_id = item[2]
    return max_node_id

def split_set(data_list,num):
    n_examples = len(data_list)
    idx = range(n_examples)
    train = idx[:num]
    val = idx[-num:]
    return np.array(data_list)[train],np.array(data_list)[val]

def split_set_by_percentage(data_list,percentage):
    n_examples = len(data_list)
    train_num = int(n_examples * percentage)

    idx = range(n_examples)
    train = idx[:train_num]
    val = idx[train_num:n_examples]
    return np.array(data_list)[train],np.array(data_list)[val]


def convert_program_data(data_list):
    # n_nodes = find_max_node_id(data_list)
    class_data_list = []
 
    for item in data_list:
        edge_list = item[0]
        target = item[1]
        class_data_list.append([edge_list, target])
    return class_data_list


def create_adjacency_matrix(edges, n_nodes, n_edge_types):
    a = np.zeros([n_nodes, n_nodes * n_edge_types * 2])
    for edge in edges:

        src_idx = edge[0]
        e_type = edge[1]
        tgt_idx = edge[2]
       
        if tgt_idx < len(a):
           a[tgt_idx-1][(e_type - 1) * n_nodes + src_idx - 1] =  1
        if src_idx <len(a):
           a[src_idx-1][(e_type - 1 + n_edge_types) * n_nodes + tgt_idx - 1] =  1
    return a

def create_embedding_matrix(node_id_edges, node_type_edges, n_nodes, pretrained_embeddings):
    a = np.zeros([n_nodes, 30])
    # print(a.shape)
    for i in range(len(node_id_edges)):
        node_type = node_type_edges[i][0]
        # print(node_type)
        src_idx = node_id_edges[i][0]
        a[src_idx-1] = pretrained_embeddings[int(node_type)]
    return a


def graph_to_adj_mat(graph, max_n_vertices, num_edge_types, tie_fwd_bkwd=True):
    bwd_edge_offset = 0 if tie_fwd_bkwd else (num_edge_types // 2)
    # print("Num edge types : " + str(num_edge_types))
    amat = np.zeros((num_edge_types, max_n_vertices, max_n_vertices))
    # print(amat.shape)
    for src, e, dest in graph:
        # print("---------------")
        # print(src)
        # print(dest)

        amat[e-1, dest, src] = 1
        amat[e-1 + bwd_edge_offset, src, dest] = 1
    return amat

def _onehot(i, total):
    return [1.0 if j == i else 0.0 for j in range(total)]

   
class MethodNamePredictionData():
   
    def __init__(self, opt, is_training=True, is_testing=False, live_test=False):

        # self.node_dim = opt.node_dim
        self.state_dim = opt.state_dim

        self.is_training = is_training
        self.is_testing = is_testing

       
            
           
        all_data_node_id, all_data_node_type, all_data_node_token = load_program_graphs_from_directory(opt.path, opt.label_lookup, opt.node_type_lookup, opt.node_token_lookup, is_training, is_testing)
        all_data_node_id = np.array(all_data_node_id)[0:len(all_data_node_id)]
        all_data_node_type = np.array(all_data_node_type)[0:len(all_data_node_type)]
        all_data_node_token = np.array(all_data_node_token)[0:len(all_data_node_token)]

        # print(all_data_node_id)
        print(all_data_node_type.shape)
        print(all_data_node_token)

        num_labels = len(opt.label_lookup.keys())
        self.num_labels = num_labels
        label_lookup_onehot = {label: _onehot(label, num_labels) for label in range(0, num_labels)}

        self.label_lookup_onehot = label_lookup_onehot

        max_node_id = find_max_node_id(all_data_node_id)
        min_node_id = find_min_node_id(all_data_node_id)
        print("Max node id in data : " + str(max_node_id))
        print("Min node id in data : " + str(min_node_id))


        self.n_edge_types = 7
        # all_data_node_id = convert_program_data(all_data_node_id)
        # all_data_node_type = convert_program_data(all_data_node_type)

        self.all_data_node_id = all_data_node_id
        self.all_data_node_type = all_data_node_type
        self.all_data_node_token = all_data_node_token

        self.data = self.process_raw_graphs()
        self.batch_size = opt.batch_size
      

    

    # ----- Data preprocessing and chunking into minibatches:
    def process_raw_graphs(self):
        print("Processing raw graphs........")
        
        # Interesting idea to batch graphs with approximately similar size into the same bucket
        # The difference is that he original code from Microsoft batch exact similar size graphs into the same bucket
        bucket_sizes = np.array(list(range(65 , 2100 , 83)))
        

        buckets = defaultdict(list)
        x_dim = self.state_dim
        for i in range(len(self.all_data_node_id)):
            # print("--------------")
            graph = self.all_data_node_id[i][0]
            label = self.all_data_node_id[i][1]
            # print(label)
            print(label)
            label_one_hot = self.label_lookup_onehot[label]

            graph_node_type = self.all_data_node_type[i][0]
            graph_node_token = self.all_data_node_token[i][0]
            

            # print(max([v for e in d['graph'] for v in [e[0], e[2]]]))
            chosen_bucket_idx = np.argmax(bucket_sizes > max([v for e in graph for v in [e[0], e[2]]]))
            chosen_bucket_size = bucket_sizes[chosen_bucket_idx]
            # print(chosen_bucket_size)
            n_active_nodes = self.state_dim

            num_nodes = find_num_nodes_of_graph(graph)

            # print("max node : " + str(num_nodes))
            # node_inits = np.zeros([num_nodes+1, 30])

            # print(node_inits.shape)
            print(num_nodes)
            node_type_indices = np.zeros(num_nodes + 1, dtype = int)
            node_token_indices = np.zeros(num_nodes + 1, dtype = int)
            for k in range(len(graph)):
                src_node_type = graph_node_type[k][0]
                tgt_node_type = graph_node_type[k][2]

                src_node_token = graph_node_token[k][0]
                tgt_node_token = graph_node_token[k][2]
              
                src_node_id = graph[k][0]
                tgt_node_id = graph[k][2]

                node_type_indices[int(src_node_id-1)] = int(src_node_type)
                node_type_indices[int(src_node_id-1)] = int(tgt_node_type)

                node_token_indices[int(src_node_id-1)] = int(src_node_token)
                node_token_indices[int(src_node_id-1)] = int(tgt_node_token)
                # print("SRC node id : " + str(src_node_id))


            # adj_mat': graph_to_adj_mat(graph, chosen_bucket_size, self.n_edge_types, True),
            buckets[chosen_bucket_idx].append({
                "graph": graph,
                "node_type_indices": node_type_indices,
                "node_token_indices": node_token_indices,
                "labels": label_one_hot
            })

        #------------------------
        # To merge the bucket with too few elements together
        anchor_bucket_idx = None
        buckets_to_delete = []
        for bucket_idx, bucket_data in buckets.items():
            if len(bucket_data) > 0 and len(bucket_data) <=5:
                # print("anchor : " + str(anchor_bucket_idx))
                if anchor_bucket_idx is None:
                    # print("None , choose bukcket id : " + str(bucket_idx))
                    anchor_bucket_idx = bucket_idx               
                if anchor_bucket_idx != bucket_idx:
                    buckets[anchor_bucket_idx].extend(bucket_data)
                    buckets_to_delete.append(bucket_idx)

        for b in buckets_to_delete:
            buckets.pop(b,None)
        #------------------------

        total = 0
        for k,v in buckets.items():
            print("--------")
            print(k)
            print(len(v))
            total = total + len(v)
        

        bucket_at_step = [[bucket_idx for _ in range(len(bucket_data))]
                          for bucket_idx, bucket_data in buckets.items()]

        # print("Bucket at step : " + str(bucket_at_step))
        # print(len(bucket_at_step))
        bucket_at_step = [x for y in bucket_at_step for x in y]

        #--------------------------------
            

        return (buckets, bucket_sizes, bucket_at_step)

    # Padding so the a batch has the same number of nodes
    def pad_batch(self, initial_node_representations, max_node):
        # remaining = max_node - len(initial_node_representations[0])
        for i in range(0,len(initial_node_representations)):
            remaining = max_node - len(initial_node_representations[i])
            initial_node_representations[i] = np.concatenate((initial_node_representations[i],np.zeros([remaining,30])), axis=0)

        return initial_node_representations

    def pad_annotations(self, initial_node_representations):
        return  np.pad(initial_node_representations,
                       pad_width=[[0, 0], [0, 0], [0, self.node_dim - self.state_dim]],
                       mode='constant')

    def pad_num_nodes(self, node_type_indices, max_node):
        for i in range(0,len(node_type_indices)):
            remaining = max_node - len(node_type_indices[i])
            node_type_indices[i] = np.concatenate((node_type_indices[i],np.zeros(remaining)), axis=0)

        return node_type_indices

    def make_batch(self, elements):
        batch_data = {'adjacency_matrix': [], 'node_type_indices': [], "node_token_indices": [],  'labels': []}

        # find graph which has the largest number of nodes in batch
        max_node = find_num_nodes_of_graph(elements[0]["graph"])
        for d in elements:
            num_node = find_num_nodes_of_graph(d["graph"])
            if max_node < num_node:
                max_node = num_node
        # print("max node : " + str(max_node))

        for d in elements:
            adjacency_matrix = graph_to_adj_mat(d["graph"], max_node + 1, self.n_edge_types, True)
            batch_data['adjacency_matrix'].append(adjacency_matrix)
            batch_data['node_type_indices'].append(d['node_type_indices'])
            batch_data['node_token_indices'].append(d['node_token_indices'])
            batch_data['labels'].append(d['labels'])

        # batch_data["init"] = self.pad_batch(batch_data['init'], max_node + 1)
        batch_data['node_type_indices'] = self.pad_num_nodes(batch_data['node_type_indices'], max_node + 1)
        batch_data['node_token_indices'] = self.pad_num_nodes(batch_data['node_token_indices'], max_node + 1)
     
        batch_data['adjacency_matrix'] = np.array(batch_data['adjacency_matrix'])[0:len(batch_data['adjacency_matrix'])]
        # batch_data['init'] = np.array(batch_data['init'])[0:len(batch_data['init'])]
        
        batch_data['labels'] = np.array(batch_data['labels'])[0:len(batch_data['labels'])]

        # print("adj shape : " + str(batch_data['adjacency_matrix'].shape))
        # print("init shape : " + str(batch_data['init'].shape))

        return batch_data, max_node

    def make_minibatch_iterator(self):
        (buckets, bucket_sizes, bucket_at_step) = self.data
        bucket_counters = defaultdict(int)
        

        if self.is_training:
            print("Shuffling training data...........")
            # np.random.shuffle(bucket_at_step)
            for _, buckets_data in buckets.items():
                np.random.shuffle(buckets_data)

        for bucket_idx, bucket_data in buckets.items():

            elements = []
            samples = 0
            for i, element in enumerate(bucket_data):
                elements.append(element)
                samples += 1
                if (samples >= self.batch_size) or ((i == len(bucket_data)-1)):
                    batch_data, batch_max_node = self.make_batch(elements)
                    num_graphs = len(batch_data['node_type_indices'])
                    node_type_indices = np.array(batch_data['node_type_indices'])
                    node_token_indices = np.array(batch_data['node_token_indices'])
                    # print(initial_representations.shape)
                    batch = {
                        "num_graphs": num_graphs,
                        "node_type_indices": node_type_indices,
                        "node_token_indices": node_token_indices,
                        "num_vertices": batch_max_node + 1,
                        "adjacency_matrix": batch_data['adjacency_matrix'],
                        "labels": batch_data['labels']
                    }

                    yield batch
                    elements = []
                    samples = 0

        # for step in range(len(bucket_at_step)):
        #     # print("-------------")
        #     bucket = bucket_at_step[step]
        #     start_idx = bucket_counters[bucket] * self.batch_size
        #     end_idx = (bucket_counters[bucket] + 1) * self.batch_size
        #     elements = buckets[bucket][start_idx:end_idx]

        #     batch_data, batch_max_node = self.make_batch(elements)
        #     num_graphs = len(batch_data['init'])
        #     initial_representations = batch_data['init']

        #     batch = {
        #         "initial_representations": initial_representations,
        #         "num_graphs": num_graphs,
        #         "num_vertices": batch_max_node + 1,
        #         "adjacency_matrix": batch_data['adjacency_matrix'],
        #         "labels": batch_data['labels']
        #     }


        #     yield batch


    def __len__(self):
        return len(self.all_data_node_id)
