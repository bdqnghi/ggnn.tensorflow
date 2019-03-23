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


def load_program_graphs_from_directory(directory, is_training=True, is_testing=True, n_classes=3):

    node_id_data_list = []
    node_type_data_list = []
    if is_training == True:
        dir_path =  os.path.join(directory,"train")
    if is_testing == True:
        dir_path =  os.path.join(directory,"test")
    filenames = []
    for f in listdir(dir_path):
      if isfile(join(dir_path, f)):
         filenames.append(f)
    int_filenames = [int(re.search('_(.*).txt', x).group(1)) for x in filenames]
    ordered_filenames = sorted(int_filenames)
    lookup = {}
    for i in range(1, 1+len(ordered_filenames)):
        if is_training:
           lookup[i] = join(dir_path, "train_%s.txt" % str(ordered_filenames[i-1]))
        if is_testing:
           lookup[i] = join(dir_path, "test_%s.txt" % str(ordered_filenames[i-1]))
    for i in trange(1, 1+n_classes):
        path = lookup[i]
        print(path)
        label = i
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

        # if data_percentage < 1.0:
        #     print("Cutting down " + str(data_percentage) + " of all data......")
        #     slicing = int(len(node_id_data_list_class_i)*data_percentage)
        #     print("Remaining data : " + str(slicing) + "......")
        #     node_id_data_list_class_i = node_id_data_list_class_i[:slicing]


        node_id_data_list.extend(node_id_data_list_class_i)
        node_type_data_list.extend(node_type_data_list_class_i)

    return node_id_data_list, node_type_data_list

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
        target_list = item[1]
        for target in target_list:
            task_type = target[0]
            task_output = target[-1]
            class_data_list.append([edge_list, task_output])
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

   
class MonoLanguageProgramData():
   
    def __init__(self, opt, is_training=True, is_testing=False):
        base_name = os.path.basename(opt.path)
        self.is_training = is_training
        self.is_testing = is_testing
        if is_training:
            saved_input_filename = "%s/%s-%d-train.pkl" % (opt.path, base_name, opt.n_classes)
        if is_testing:
            saved_input_filename = "%s/%s-%d-test.pkl" % (opt.path, base_name, opt.n_classes)

        if os.path.exists(saved_input_filename): 
           input_file = open(saved_input_filename, 'rb')
           buf = input_file.read()
           all_data_node_id, all_data_node_type = pyarrow.deserialize(buf)
           input_file.close()
        else:
           all_data_node_id, all_data_node_type = load_program_graphs_from_directory(opt.path, is_training, is_testing, opt.n_classes)
           all_data_node_id = np.array(all_data_node_id)[0:len(all_data_node_id)]
           all_data_node_type = np.array(all_data_node_type)[0:len(all_data_node_type)]
           buf = pyarrow.serialize((all_data_node_id, all_data_node_type)).to_buffer()
           out = pyarrow.OSFile(saved_input_filename, 'wb')
           out.write(buf)
           out.close()
        
        self.pretrained_embeddings = opt.pretrained_embeddings
        self.batch_size = opt.train_batch_size

        label_lookup = {label: _onehot(label, opt.n_classes) for label in range(0, opt.n_classes)}

        self.label_lookup = label_lookup
        # if is_train == True:
        print("Number of all data : " + str(len(all_data_node_id)))
        # else:
            # print("Number of all testing data : " + str(len(all_data_node_id)))
        self.n_edge_types =  find_max_edge_id(all_data_node_id)
        # print("Edge types : " + str(self.n_edge_types))
        max_node_id = find_max_node_id(all_data_node_id)
        min_node_id = find_min_node_id(all_data_node_id)
        print("Max node id in data : " + str(max_node_id))
        print("Min node id in data : " + str(min_node_id))
        max_node_type = find_max_node_id(all_data_node_type)
        min_node_type = find_min_node_id(all_data_node_type)
        print("Max node type in data : " + str(max_node_type))
        print("Min node type in data : " + str(min_node_type))
        # print("Max node id : " + str(max_node_id))
        # print("Max node type : " + str(max_node_type))
    
        self.n_node_by_id = max_node_id
        self.n_node_by_type = max_node_type
        
        all_data_node_id = convert_program_data(all_data_node_id)
        all_data_node_type = convert_program_data(all_data_node_type)

        self.all_data_node_id = all_data_node_id
        self.all_data_node_type = all_data_node_type

        self.data = self.process_raw_graphs()
    

    # ----- Data preprocessing and chunking into minibatches:
    def process_raw_graphs(self):
        print("Processing raw graphs........")
        
        # Interesting idea to batch graphs with approximately similar size into the same bucket
        # The difference is that he original code from Microsoft batch exact similar size graphs into the same bucket
        bucket_sizes = np.array(list(range(65 , 2100 , 83)))
        

        buckets = defaultdict(list)
        x_dim = 30
        for i in range(len(self.all_data_node_id)):
            # print("--------------")
            graph = self.all_data_node_id[i][0]
            label = self.all_data_node_id[i][1]

            label_one_hot = self.label_lookup[label-1]

            graph_node_type = self.all_data_node_type[i][0]
            

            # print(max([v for e in d['graph'] for v in [e[0], e[2]]]))
            chosen_bucket_idx = np.argmax(bucket_sizes > max([v for e in graph for v in [e[0], e[2]]]))
            chosen_bucket_size = bucket_sizes[chosen_bucket_idx]
            # print(chosen_bucket_size)
            n_active_nodes = 30

            num_nodes = find_num_nodes_of_graph(graph)

            # print("max node : " + str(num_nodes))
            node_inits = np.zeros([num_nodes+1, 30])

            # print(node_inits.shape)
            for k in range(len(graph)):
                src_node_type = graph_node_type[k][0]
                # print(src_node_type)
                tgt_node_type = graph_node_type[k][2]
                # print(node_type)
                src_node_id = graph[k][0]
                tgt_node_id = graph[k][0]
                # print("SRC node id : " + str(src_node_id))


                node_inits[int(src_node_id)] = self.pretrained_embeddings[int(src_node_type)]
                node_inits[int(tgt_node_id)] = self.pretrained_embeddings[int(tgt_node_type)]

            # adj_mat': graph_to_adj_mat(graph, chosen_bucket_size, self.n_edge_types, True),

            buckets[chosen_bucket_idx].append({
                "graph": graph,
                "init": node_inits,
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

        # print("Bucket at step : " + str(bucket_at_step))

        # np.random.shuffle(bucket_at_step)
        # for _, buckets_data in buckets.items():
            # np.random.shuffle(buckets_data)

        # print("Bucket at step : " + str(bucket_at_step))

        # def chunking(list_data, chunk_size):
        #     chunks = [] 
        #     for i in range(0, len(list_data), chunk_size):
        #         chunks.append(list_data[i:i + chunk_size])

        #--------------------------------
        # batch_data = {}
        # start_idx = 0
        # end_idx = 0

        # for bucket_idx, buckets_data in buckets.items():
        #     batch_data[bucket_idx] = {}

        #     samples = 0
        #     chunk_idx = 0


        #     for data in buckets_data:
                
        #         batch_data[bucket_idx][chunk_idx] = {}
        #         if samples >= self.batch_size:
        #             print("samples : " + str(samples))
        #             start_idx = chunk_idx * self.batch_size

        #             end_idx = (chunk_idx + 1) * self.batch_size
        #             batch_data[bucket_idx][chunk_idx]["start_idx"] = start_idx
        #             batch_data[bucket_idx][chunk_idx]["end_idx"] = end_idx
        #             samples = 0
        #             chunk_idx+=1
        #         samples += 1

        #     start_idx = 0
        #     end_idx = 0
        #--------------------------------
            

        return (buckets, bucket_sizes, bucket_at_step)

    # Padding so the a batch has the same number of nodes
    def pad_batch(self, initial_node_representations, max_node):
        # remaining = max_node - len(initial_node_representations[0])
        for i in range(0,len(initial_node_representations)):
            remaining = max_node - len(initial_node_representations[i])
            initial_node_representations[i] = np.concatenate((initial_node_representations[i],np.zeros([remaining,30])), axis=0)

        return initial_node_representations


    def make_batch(self, elements):
        batch_data = {'adjacency_matrix': [], 'init': [], 'labels': []}

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
            batch_data['init'].append(d['init'])
            batch_data['labels'].append(d['labels'])

        batch_data["init"] = self.pad_batch(batch_data['init'], max_node + 1)
     
        batch_data['adjacency_matrix'] = np.array(batch_data['adjacency_matrix'])[0:len(batch_data['adjacency_matrix'])]
        batch_data['init'] = np.array(batch_data['init'])[0:len(batch_data['init'])]
        
        

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
                    # print("00000000000000000000000000000000")
                    # print(batch_data['labels'])
                    num_graphs = len(batch_data['init'])
                    initial_representations = batch_data['init']
                    batch = {
                        "initial_representations": initial_representations,
                        "num_graphs": num_graphs,
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