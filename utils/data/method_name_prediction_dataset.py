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
from sklearn.preprocessing import LabelEncoder
from sklearn.preprocessing import OneHotEncoder

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

def process_token(token):
    excluded_tokens = [",","{",";","}",")","(",'"',"'","`",""," "]
    for t in excluded_tokens:
        token = token.replace(t,"")
    return token


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
    return max_node_id + 1

def split_node_token(node_token_str):
    splits = node_token_str.split("-")
    return [int(x) for x in splits if x]

def find_max_num_tokens_of_graph(graph):
    max_num_tokens = 0
    for item in graph:
        source = item[0]
        sink = item[2]
        source_splits = split_node_token(source)
        sink_splits = split_node_token(sink)
        if len(source_splits) > max_num_tokens:
            max_num_tokens = len(source_splits)
        if len(sink_splits) > max_num_tokens:
            max_num_tokens = len(sink_splits)
    return max_num_tokens

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

def graph_to_adj_mat(graph, num_nodes, num_edge_types, tie_fwd_bkwd=True):
    bwd_edge_offset = 0 if tie_fwd_bkwd else (num_edge_types // 2)
    # print("Num edge types : " + str(num_edge_types))
    amat = np.zeros((num_edge_types, num_nodes, num_nodes))
    # print(amat.shape)
    for src, e, dest in graph:
        # print("---------------")
        # print(src)
        # print(dest)

        amat[e-1, dest , src] = 1
        amat[e-1 + bwd_edge_offset, src, dest] = 1
    return amat

# def _onehot(i, total):
#     return [1.0 if j == i else 0.0 for j in range(total)]

def _onehot(i, total):
    zeros = np.zeros(total)
    zeros[i] = 1.0
    return zeros



class MethodNamePredictionData():
   
    def __init__(self, opt, data_path, is_training=True, is_testing=False, is_validating=False, live_test=False):

        if is_training:
            print("Processing training data....")
            self.batch_size = opt.batch_size
        if is_testing:
            print("Processing testing data....")
            self.batch_size = opt.batch_size
        if is_validating:
            print("Processing validation data....")
            self.batch_size = opt.val_batch_size
        # self.node_dim = opt.node_dim
        self.state_dim = opt.state_dim

        self.is_training = is_training
        self.is_testing = is_testing
        self.is_validating = is_validating
        self.n_edge_types = opt.n_edge_types
        self.num_labels = len(opt.label_lookup.keys())
        self.graph_size_threshold = opt.graph_size_threshold
        self.sampling_size = opt.sampling_size

        base_name =os.path.basename(data_path)
        parent_base_name = os.path.basename(os.path.dirname(data_path))

        base_path = str(os.path.dirname(data_path))

        saved_input_filename = "%s/%s-%s.pkl" % (base_path, parent_base_name, base_name)
        if os.path.exists(saved_input_filename):
            print("Loading existing data file: ", str(saved_input_filename))
            input_file = open(saved_input_filename, 'rb')
            buf = input_file.read()
            self.data = pyarrow.deserialize(buf)
            input_file.close()
        else:
            all_data_node_id, all_data_node_type, all_data_node_token = self.load_program_graphs_from_directory(data_path, opt.label_lookup, opt.node_type_lookup, opt.node_token_lookup, is_training, is_testing)
        
            print("Converting array to numpy array......")
            all_data_node_id = np.asarray(all_data_node_id) 
            all_data_node_type = np.asarray(all_data_node_type) 
            all_data_node_token = np.asarray(all_data_node_token) 
         
            # self.num_labels = num_labels
            # print("Computing lookup vectors of label", str(num_labels))
            # label_lookup_onehot = {label: _onehot(label, num_labels) for label in range(0, num_labels)}

            # self.label_lookup_onehot = label_lookup_onehot

            # max_node_id = find_max_node_id(all_data_node_id)
            # min_node_id = find_min_node_id(all_data_node_id)
            # print("Max node id in data : " + str(max_node_id))
            # print("Min node id in data : " + str(min_node_id))

            # all_data_node_id = convert_program_data(all_data_node_id)
            # all_data_node_type = convert_program_data(all_data_node_type)
            
            self.all_data_node_id = all_data_node_id
            self.all_data_node_type = all_data_node_type
            self.all_data_node_token = all_data_node_token

            self.data = self.process_raw_graphs()
            print("Serializing......")
            buf = pyarrow.serialize(self.data).to_buffer()
            out = pyarrow.OSFile(saved_input_filename, 'wb')
            print("Writing to pkl......")
            out.write(buf)
            out.close()
       
        
        # buckets, bucket_sizes, bucket_at_step = self.data
        # bucket_splits = defaultdict(list)
        # size_of_chunks = 10000
        # for bucket_idx, bucket_data in buckets.items():
            
        #     parts = int(len(bucket_data)/size_of_chunks) + 1
        #     start = 0 
        #     end = size_of_chunks
        #     index_tuples = []
        #     for part in range(1, parts):
        #         start = start + size_of_chunks
        #         end = end + size_of_chunks
        #         index_tuples.append((start,end))
            
        #     bucket_splits[bucket_idx].append(index_tuples)
    
        # Optional : Remove bucket for training step
        # if self.is_training:
        #     print("Deleting bucket for training data with threshold: " + str(self.bucket_size_threshold))
        #     buckets, bucket_sizes, bucket_at_step = self.data
        #     bucket_ids_to_delete = []
        #     for bucket_idx, bucket_data in buckets.items():
        #         bucket_size = bucket_sizes[bucket_idx]
        #         if bucket_size > self.bucket_size_threshold:
        #             bucket_ids_to_delete.append(bucket_idx)
        #     for b in bucket_ids_to_delete:
        #         del buckets[b]

        # if self.is_validating:
        #     print("Deleting bucket for validation data with threshold: " + str(self.bucket_size_threshold))
       
        # self.data = (buckets, bucket_sizes, bucket_at_step)
    
    def load_program_graphs_from_directory(self, directory, label_lookup, node_type_lookup, node_token_lookup, is_training=True, is_testing=False, is_validating=False):

        node_id_data_list = []
        node_type_data_list = []
        node_token_data_list = []
        
        
        all_files_path = []
        for subdir , dirs, files in os.walk(directory):
            print("Loading graph from files....")
            for file in tqdm(files):
                raw_file_path = os.path.join(subdir,file)
                all_files_path.append(raw_file_path)

        # print(all_files_path)
        count = 0
        
        # if is_training:
            # all_files_path = all_files_path[:opt.data_threshold]
            # num_to_select = self.data_threshold           
            # all_files_path = random.sample(all_files_path, num_to_select)

        for file_path in tqdm(all_files_path):
            with open(file_path,"r") as f:
                print(file_path)
                lines = f.readlines()
                node_id_edge_per_class = []
                node_type_edge_per_class = []
                node_token_edge_per_class = []
                for line in lines:
                
                    line = line.replace("\n","")
                    line = line.replace("'","")
                    line = " ".join(line.split())
                    
                    if "?" not in line:
                        
                        splits = line.split(",")
                        source_node_id = splits[0]
                        source_node_type_id = splits[1]
                        source_tokens_ids = splits[2]

                        sink_node_id = splits[4]
                        sink_node_type_id = splits[5]
                        sink_tokens_ids = splits[6]

                        edge_id = splits[3]

                        node_id_edge = [int(source_node_id), int(edge_id), int(sink_node_id)]
                        node_type_edge = [int(source_node_type_id), int(edge_id), int(sink_node_type_id)]
                        node_token_edge = [source_tokens_ids, int(edge_id), sink_tokens_ids]
                        
                        node_id_edge_per_class.append(node_id_edge)
                        node_type_edge_per_class.append(node_type_edge)
                        node_token_edge_per_class.append(node_token_edge)
                    else:
                        splits = line.split(" ")
                        label_id = splits[1]
                    
            # print(node_id_edge_per_class)
            if len(node_id_edge_per_class) > 0:
                node_id_data_list.append([node_id_edge_per_class, label_id, file_path])
                node_type_data_list.append([node_type_edge_per_class, label_id])
                node_token_data_list.append([node_token_edge_per_class, label_id])
                
            count += 1
        
        print("Total number of files read : " + str(count))
    
        return node_id_data_list, node_type_data_list, node_token_data_list

    # ----- Data preprocessing and chunking into minibatches:
    def process_raw_graphs(self):
        print("Processing raw graphs........")
        
        # Interesting idea to batch graphs with approximately similar size into the same bucket
        # The difference is that the original code from Microsoft batch exact similar size graphs into the same bucket
        bucket_sizes = np.array(list(range(30 , 7500 , 30)))
        

        buckets = defaultdict(list)
        x_dim = self.state_dim
        print("Adding graphs to bucket.....")
        for i in tqdm(range(len(self.all_data_node_id))):
            # print("--------------")
            graph = self.all_data_node_id[i][0]
            label = self.all_data_node_id[i][1]
            path = self.all_data_node_id[i][2]
            # label_one_hot = self.label_lookup_onehot[int(label)]

            graph_node_type = self.all_data_node_type[i][0]
            graph_node_token = self.all_data_node_token[i][0]
           
            # print(max([v for e in d['graph'] for v in [e[0], e[2]]]))
            chosen_bucket_idx = np.argmax(bucket_sizes > max([v for e in graph for v in [e[0], e[2]]]))

            # if chosen_bucket_idx < 200:
            max_num_tokens = find_max_num_tokens_of_graph(graph_node_token)
            chosen_bucket_size = bucket_sizes[chosen_bucket_idx]
            # print(chosen_bucket_size)
            n_active_nodes = self.state_dim

            num_nodes = find_num_nodes_of_graph(graph)

            # print("max node : " + str(num_nodes))
            # node_inits = np.zeros([num_nodes+1, 30])

            # print(node_inits.shape)
        
            node_type_indices = np.zeros(num_nodes, dtype = int)
            node_token_indices = np.zeros((num_nodes, max_num_tokens), dtype = int)
            for k in range(len(graph)):
                src_node_type = graph_node_type[k][0]
                tgt_node_type = graph_node_type[k][2]

                src_node_tokens = graph_node_token[k][0]
                tgt_node_tokens = graph_node_token[k][2]
                
                src_node_tokens = split_node_token(src_node_tokens)
                tgt_node_tokens = split_node_token(tgt_node_tokens)
                
                if len(src_node_tokens) < max_num_tokens:
                    remaining = max_num_tokens - len(src_node_tokens)
                    for i in range(remaining):
                        src_node_tokens.append(0)
                
                if len(tgt_node_tokens) < max_num_tokens:
                    remaining = max_num_tokens - len(tgt_node_tokens)
                    for i in range(remaining):
                        tgt_node_tokens.append(0)

                src_node_id = graph[k][0]
                tgt_node_id = graph[k][2]

                node_type_indices[int(src_node_id)] = int(src_node_type)
                node_type_indices[int(tgt_node_id)] = int(tgt_node_type)

                if len(src_node_tokens) > 0:
                    node_token_indices[int(src_node_id)] = src_node_tokens
                if len(tgt_node_tokens) > 0:
                    node_token_indices[int(tgt_node_id)] = tgt_node_tokens
                # print("SRC node id : " + str(src_node_id))
        


            # adj_mat': graph_to_adj_mat(graph, chosen_bucket_size, self.n_edge_types, True),
            buckets[chosen_bucket_idx].append({
                "graph": graph,
                "node_type_indices": node_type_indices,
                "node_token_indices": node_token_indices,
                "labels": int(label),
                "path": path   
            })

        print("Merging buckets.....")
        #------------------------
        # To merge the bucket with too few elements together
        # anchor_bucket_idx = None
        # buckets_to_delete = []
        # for bucket_idx, bucket_data in buckets.items():
        #     if len(bucket_data) > 0 and len(bucket_data) <=10:
        #         if anchor_bucket_idx is None:      
        #             anchor_bucket_idx = bucket_idx               
        #         if anchor_bucket_idx != bucket_idx:
        #             buckets[anchor_bucket_idx].extend(bucket_data)
        #             buckets_to_delete.append(bucket_idx)

        # for b in buckets_to_delete:
        #     buckets.pop(b,None)
        #------------------------

        # total = 0
        # for k,v in buckets.items():
        #     total = total + len(v)
        
        bucket_at_step = [[bucket_idx for _ in range(len(bucket_data))]
                          for bucket_idx, bucket_data in buckets.items()]

        # print("Bucket at step : " + str(bucket_at_step))
        # print(len(bucket_at_step))
        bucket_at_step = [x for y in bucket_at_step for x in y]

        return (buckets, bucket_sizes, bucket_at_step)

    # Padding so the a batch has the same number of nodes
    def pad_batch(self, initial_node_representations, max_node):
        # remaining = max_node - len(initial_node_representations[0])
        for i in range(0,len(initial_node_representations)):
            remaining = max_node - len(initial_node_representations[i])
            initial_node_representations[i] = np.concatenate((initial_node_representations[i],np.zeros([remaining,30])), axis=0)

        return initial_node_representations

    def pad_node_types(self, node_type_indices, num_nodes_of_batch):
        for i in range(0, len(node_type_indices)):
            remaining = num_nodes_of_batch - len(node_type_indices[i])
            node_type_indices[i] = np.concatenate((node_type_indices[i],np.zeros(remaining)), axis=0)

        return node_type_indices

    def pad_node_tokens(self, node_token_indices, num_nodes_of_batch, num_sub_tokens_of_batch):
        # print("**********************")
        # print("Num nodes of batch : " + str(num_nodes_of_batch))
        # print("Num sub tokens of batch : " + str(num_sub_tokens_of_batch))
        for i in range(0, len(node_token_indices)):
            
            remaining_nodes = num_nodes_of_batch - node_token_indices[i].shape[0]
            remaining_sub_tokens = num_sub_tokens_of_batch - node_token_indices[i].shape[1]
            # print("--------------")
            # print("Remaining nodes : " + str(remaining_nodes))
            # print("Remaining sub tokens : " + str(remaining_sub_tokens))
            # print("Original shape : " + str(node_token_indices[i].shape))
           
            if remaining_nodes > 0:
                if remaining_sub_tokens == 0:
                    # print("case 1....")
                    node_token_indices[i] = np.concatenate((node_token_indices[i],np.zeros((remaining_nodes, num_sub_tokens_of_batch))), axis=0)        
                else:
                    # print("case 2....")
                    node_token_indices[i] = np.concatenate((node_token_indices[i],np.zeros((node_token_indices[i].shape[0], remaining_sub_tokens))), axis=1)
                    node_token_indices[i] = np.concatenate((node_token_indices[i],np.zeros((remaining_nodes, num_sub_tokens_of_batch))), axis=0)        
            else:
                if remaining_sub_tokens > 0:
                    node_token_indices[i] = np.concatenate((node_token_indices[i],np.zeros((node_token_indices[i].shape[0], remaining_sub_tokens))), axis=1)

            # print("After shape :" + str(node_token_indices[i].shape))
        return node_token_indices

    def make_batch(self, elements):
        batch_data = {'adjacency_matrix': [], 'node_type_indices': [], "node_token_indices": [],  'labels': [], 'paths':[]}

        # find graph which has the largest number of nodes in batch


        num_nodes_of_batch = find_num_nodes_of_graph(elements[0]["graph"])
        num_sub_tokens_of_batch = 0
        for d in elements:
            num_nodes_of_current_graph = find_num_nodes_of_graph(d["graph"])
            if num_nodes_of_batch < num_nodes_of_current_graph:
                num_nodes_of_batch = num_nodes_of_current_graph
            
            num_sub_tokens_of_graph = d['node_token_indices'].shape[1]
            if num_sub_tokens_of_batch < num_sub_tokens_of_graph:
                num_sub_tokens_of_batch = num_sub_tokens_of_graph
            
        for d in elements:
            adjacency_matrix = graph_to_adj_mat(d["graph"], num_nodes_of_batch, self.n_edge_types, True)
            batch_data['adjacency_matrix'].append(adjacency_matrix)
            batch_data['node_type_indices'].append(d['node_type_indices'])
            batch_data['node_token_indices'].append(d['node_token_indices'])
            batch_data['labels'].append(d['labels'])
            batch_data['paths'].append(d['path'])

        # batch_data["init"] = self.pad_batch(batch_data['init'], max_node + 1)
        batch_data['node_type_indices'] = self.pad_node_types(batch_data['node_type_indices'], num_nodes_of_batch)
        batch_data['node_token_indices'] = self.pad_node_tokens(batch_data['node_token_indices'], num_nodes_of_batch, num_sub_tokens_of_batch)
        
        batch_data['node_type_indices'] = np.stack( batch_data['node_type_indices'], axis=0 )

        batch_data['node_token_indices'] = np.stack( batch_data['node_token_indices'], axis=0 )
        
        batch_data['adjacency_matrix'] = np.stack( batch_data['adjacency_matrix'], axis=0 )
        # batch_data['init'] = np.array(batch_data['init'])[0:len(batch_data['init'])]
        
        batch_data['labels'] = np.stack(batch_data['labels'],  axis=0 )

        # print("adj shape : " + str(batch_data['adjacency_matrix'].shape))
        # print("init shape : " + str(batch_data['init'].shape))

        return batch_data, num_nodes_of_batch

    def make_minibatch_iterator(self):
        (buckets, bucket_sizes, bucket_at_step) = self.data
        bucket_counters = defaultdict(int)
        
        buckets_to_process = defaultdict(list)

        if self.is_training:
            print("Shuffling training data...........")
            # np.random.shuffle(bucket_at_step)
            for bucket_idx , buckets_data in buckets.items():
                # np.random.shuffle(buckets_data)
                buckets_to_process[bucket_idx] = random.sample(buckets_data, int(len(buckets_data)/self.sampling_size))
        # if self.is_validating:
        #     print("Select subset of validation data...........")
        #     # np.random.shuffle(bucket_at_step)
        #     for bucket_idx , buckets_data in buckets.items():
        #         # np.random.shuffle(buckets_data)
        #         # buckets_to_process[bucket_idx] = random.sample(buckets_data, int(len(buckets_data)/20))  
        #         buckets_to_process[bucket_idx] = buckets_data[:int(len(buckets_data)/10)]
        else:
            buckets_to_process = buckets
        
        # buckets_to_process = buckets
            
        for bucket_idx, bucket_data in buckets_to_process.items():

            elements = []
            samples = 0
            
            # if len(bucket_data) > 5:
            for i, element in enumerate(bucket_data):

                # if self.is_training:
                num_nodes_of_graph = find_num_nodes_of_graph(element["graph"])
                if num_nodes_of_graph < self.graph_size_threshold:
                    elements.append(element)
                    samples += 1
                # else:
                #     elements.append(element)
                #     samples += 1
                if (samples >= self.batch_size) or ((i == len(bucket_data)-1)):
                    if len(elements) > 0:
                        batch_data, batch_max_node = self.make_batch(elements)
                        num_graphs = len(batch_data['node_type_indices'])
                        node_type_indices = np.array(batch_data['node_type_indices'])
                        node_token_indices = np.array(batch_data['node_token_indices'])
                        # print(initial_representations.shape)

                        batch_labels_one_hot = []
                        for label in batch_data['labels']:
                            one_hot = _onehot(label, self.num_labels)
                            batch_labels_one_hot.append(one_hot)

                        batch_labels_one_hot = np.asarray(batch_labels_one_hot)
                        batch = {
                            "num_graphs": num_graphs,
                            "node_type_indices": node_type_indices,
                            "node_token_indices": node_token_indices,
                            "num_vertices": batch_max_node,
                            "adjacency_matrix": batch_data['adjacency_matrix'],
                            "labels": batch_labels_one_hot,
                            "labels_index": batch_data['labels'],
                            "paths": batch_data['paths']
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
