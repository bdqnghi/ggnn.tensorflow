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
import pickle
from utils import identifier_splitting

excluded_tokens = [",","{",";","}",")","(",'"',"'","`",""," ","[]","[","]","/",":","."," "]

def _onehot(i, total):
    zeros = np.zeros(total)
    zeros[i] = 1.0
    return zeros

def process_token(token):
    for t in excluded_tokens:
        token = token.replace(t, "")
    return token

class MethodNamePredictionData():
   
    def __init__(self, opt, data_path, is_training=True, is_testing=False, is_validating=False):
        if is_training:
            print("Processing training data....")
           
        if is_testing:
            print("Processing testing data....")
     
        if is_validating:
            print("Processing validation data....")
         
        self.is_training = is_training
        self.is_testing = is_testing
        self.is_validating = is_validating
        self.batch_size = opt.batch_size
        self.node_type_lookup = opt.node_type_lookup
        self.node_token_lookup = opt.node_token_lookup
        self.label_lookup = opt.label_lookup
        self.label_size = opt.label_size
        self.tree_size_threshold_upper = opt.tree_size_threshold_upper
        self.tree_size_threshold_lower = opt.tree_size_threshold_lower
        self.num_files_threshold = opt.num_files_threshold

        base_name =os.path.basename(data_path)
        parent_base_name = os.path.basename(os.path.dirname(data_path))
        base_path = str(os.path.dirname(data_path))
        saved_input_filename = "%s/%s-%s.pkl" % (base_path, parent_base_name, base_name)

        if os.path.exists(saved_input_filename):
            print("Loading existing data file: ", str(saved_input_filename))
            self.data = pickle.load(open(saved_input_filename, "rb"))
           

        else:
            trees = self.load_program_data(data_path)
            self.trees = trees
            self.data = self.process_raw_trees()
            print("Serializing......")
            pickle.dump(self.data, open(saved_input_filename, "wb" ) )


    def load_program_data(self, directory):
        trees = []
        count = 0
        for subdir , dirs, files in os.walk(directory): 
            for file in tqdm(files):
                if count < self.num_files_threshold:
                    if file.endswith(".pkl") and not file.endswith(".slice.pkl"):
                        pkl_file_path = os.path.join(subdir,file)
                        # print(pkl_file_path)
                        pb_representation = self.load_tree_from_pickle_file(pkl_file_path)
                        # print(pb_representation)
                        root = pb_representation.element

                    
                        # print(pb_representation)
                        # root = pb_representation.element
                        # filename: "/e/java-small/training/project_2/DelaunayTriangulator_trim.java"
                        file_name = root.unit.filename.replace(".java","")
                        file_name_splits = file_name.split("/")
                        try:
                            method_name = file_name_splits[len(file_name_splits)-1].split("_")[1]
                            if method_name in self.label_lookup:
                                tree, size = self._traverse_tree(root)

                                # print("Size : " + str(size))
                                tree_data = {
                                    "tree": tree,
                                    "method_name": method_name,
                                    "size": size,
                                    "file_path": pkl_file_path
                                }
                                trees.append(tree_data)
                        except Exception as e:
                            print(str(e) + " " + str(file_name))
                        # print(tree_data)
                        # if size < self.tree_size_threshold:
                        #     
                count = count + 1
         
        return trees

    def look_up_for_id_of_token(self, token):
        
        token_id = self.node_token_lookup["<SPECIAL>"]
        if token in self.node_token_lookup:
            token_id = self.node_token_lookup[token]

        return token_id

    def load_tree_from_pickle_file(self, file_path):
        """Builds an AST from a script."""
   
        with open(file_path, 'rb') as file_handler:
            tree = pickle.load(file_handler)
            # print(tree)
            return tree
        return "error"

    # def process_sub_token_list(self, tokens_list):
    #     temp_tokens_list = []
    #     if len(tokens_list) >= 2:
    #         for token in tokens_list:

    def _traverse_tree(self, root):
        num_nodes = 0

        queue = [root]

        root_token = str(root.text)
        root_sub_tokens = identifier_splitting.split_identifier_into_parts(root_token)
        
        root_sub_token_ids = []
        for sub_token in root_sub_tokens:
            root_sub_token_ids.append(self.look_up_for_id_of_token(sub_token))
       
        root_json = {
            "node_type": str(root.srcml_kind),
            "node_token": root_sub_token_ids,
            "node_token_text": str(root.text),
            "children": []
        }

        queue_json = [root_json]
      
        while queue:
        
            current_node = queue.pop(0)
            num_nodes += 1
            current_node_json = queue_json.pop(0)

            children = [x for x in current_node.child]
            queue.extend(children)
        
            for child in children:
                child_sub_tokens = identifier_splitting.split_identifier_into_parts(str(child.text))

                children_sub_token_ids = []
                for sub_token in child_sub_tokens:
                    sub_token = process_token(sub_token)
                    children_sub_token_ids.append(self.look_up_for_id_of_token(sub_token))

                # To limit the number of sub tokens to 5 to reduce computation intensity
                children_sub_token_ids = list(set(children_sub_token_ids))
                if len(children_sub_token_ids) > 5:
                    children_sub_token_ids = random.sample(children_sub_token_ids, 5)

                child_json = {
                    "node_type": str(child.srcml_kind),
                    "node_token": children_sub_token_ids,
                    "node_token_text":str(child.text),
                    "children": []
                }

                current_node_json['children'].append(child_json)
                queue_json.append(child_json)

        
        # print(node_token_root_json)
        return root_json, num_nodes

    def process_raw_trees(self):
        bucket_sizes = np.array(list(range(30 , 7500 , 10)))
        buckets = defaultdict(list)

        for tree_data in self.trees:
          
            tree, method_name, tree_size = tree_data["tree"], tree_data["method_name"], tree_data["size"]

            chosen_bucket_idx = np.argmax(bucket_sizes > tree_size)
            buckets[chosen_bucket_idx].append(tree_data)
     
        return buckets, bucket_sizes


    def extract_training_data(self, tree_data):
        
        tree, method_name, size, file_path = tree_data["tree"], tree_data["method_name"], tree_data["size"], tree_data["file_path"]
        # print(tree)
        node_types = []
        node_tokens = []
        node_tokens_text = []
        node_indexes = []
        children_indices = []
        children_node_types = []
        children_node_tokens = []
        # label = 0
        label = self.label_lookup[method_name]

        label_one_hot = _onehot(label, self.label_size)
        queue = [(tree, -1)]
        # print queue
        while queue:
            # print "############"
            node, parent_ind = queue.pop(0)
            # print node
            # print parent_ind
            node_ind = len(node_types)
            # print "node ind : " + str(node_ind)
            # add children and the parent index to the queue
            queue.extend([(child, node_ind) for child in node['children']])
            # create a list to store this node's children indices
            children_indices.append([])
            children_node_types.append([])
            children_node_tokens.append([])
            # add this child to its parent's child list
            if parent_ind > -1:
                children_indices[parent_ind].append(node_ind)
                children_node_types[parent_ind].append(int(node["node_type"]))
                children_node_tokens[parent_ind].append(node["node_token"])
            
            node_type = node['node_type']
            node_token = node['node_token']
            node_token_text = node["node_token_text"]

            node_types.append(int(node_type))
            node_tokens.append(node_token)
            node_indexes.append(node_ind)
            node_tokens_text.append(node_token_text)

        # print("-------------")
        # print(node_types)
        # print(node_tokens)
        # print(children_indices)
        # print(children_node_types)
        # print(children_node_tokens)
     
        return node_indexes, node_types, node_tokens, node_tokens_text, children_indices, children_node_types, children_node_tokens, label_one_hot, size, file_path
            
            
    def make_batch(self, batch_data):
        batch_node_indexes = []
        batch_node_types = []
        batch_node_tokens = []
        batch_node_tokens_text = []
        batch_children_indices = []
        batch_children_node_types = []
        batch_children_node_tokens = []
        batch_labels = []
        batch_tree_size = []
        batch_file_path = []
        for tree_data in batch_data:
            node_indexes, node_types, node_tokens, node_tokens_text, children_indices, children_node_types, children_node_tokens, label, size, file_path = self.extract_training_data(tree_data)
            batch_node_indexes.append(node_indexes)
            batch_node_types.append(node_types)
            batch_node_tokens.append(node_tokens)
            batch_node_tokens_text.append(node_tokens_text)
            batch_children_indices.append(children_indices)
            batch_children_node_types.append(children_node_types)
            batch_children_node_tokens.append(children_node_tokens)
            batch_labels.append(label)
            batch_tree_size.append(size)
            batch_file_path.append(file_path)
        
        batch_node_types, batch_node_tokens, batch_children_indices, batch_children_node_types, batch_children_node_tokens = self._pad_batch(batch_node_types, batch_node_tokens, batch_children_indices, batch_children_node_types, batch_children_node_tokens)
        return batch_node_indexes, batch_node_types, batch_node_tokens, batch_node_tokens_text, batch_children_indices, batch_children_node_types, batch_children_node_tokens, batch_labels, batch_tree_size, batch_file_path

    #  def _pad_batch(self, nodes, children, labels):
    #     if not nodes:
    #         return [], [], []
    #     max_nodes = max([len(x) for x in nodes])
    #     max_children = max([len(x) for x in children])
    #     child_len = max([len(c) for n in children for c in n])

    #     nodes = [n + [0] * (max_nodes - len(n)) for n in nodes]
    #     # pad batches so that every batch has the same number of nodes
    #     children = [n + ([[]] * (max_children - len(n))) for n in children]
    #     # pad every child sample so every node has the same number of children
    #     children = [[c + [0] * (child_len - len(c)) for c in sample] for sample in children]


    #     return nodes, children, labels

    def _pad_batch(self, batch_node_types, batch_node_tokens, batch_children_indices, batch_children_node_types, batch_children_node_tokens):
        # if not nodes:
            # return [], [], []
        # batch_node_types
        max_num_nodes = max([len(x) for x in batch_node_types])
        batch_node_types = [n + [0] * (max_num_nodes - len(n)) for n in batch_node_types]

        # batch_children_indices
        max_num_nodes = max([len(x) for x in batch_children_indices])
        max_num_children_per_node = max([len(c) for n in batch_children_indices for c in n])
        batch_children_indices = [n + ([[]] * (max_num_nodes - len(n))) for n in batch_children_indices]
        batch_children_indices = [[c + [0] * (max_num_children_per_node - len(c)) for c in sample] for sample in batch_children_indices]
        
        # batch_node_tokens
        max_num_nodes = max([len(x) for x in batch_node_tokens])
        max_num_children_per_node = max([len(c) for n in batch_node_tokens for c in n])
        batch_node_tokens = [n + ([[]] * (max_num_nodes - len(n))) for n in batch_node_tokens]
        batch_node_tokens = [[c + [0] * (max_num_children_per_node - len(c)) for c in sample] for sample in batch_node_tokens]

        # batch_children_node_types
        max_num_nodes = max([len(x) for x in batch_children_node_types])
        max_num_children_per_node = max([len(c) for n in batch_children_node_types for c in n])
        batch_children_node_types = [n + ([[]] * (max_num_nodes - len(n))) for n in batch_children_node_types]
        batch_children_node_types = [[c + [0] * (max_num_children_per_node - len(c)) for c in sample] for sample in batch_children_node_types]

        # batch_children_node_tokens
        # 0-dimension: number of nodes of the tree
        # 1-dimension: number of children per node
        # 2-dimension: number of subtoken per children per node
        max_num_nodes = max([len(x) for x in batch_children_node_tokens])
        max_num_children_per_node = max([len(c) for n in batch_children_node_tokens for c in n])
        max_num_of_subtoken_per_children_per_node = max([len(s) for n in batch_children_node_tokens for c in n for s in c])
        batch_children_node_tokens = [n + ([[]] * (max_num_nodes - len(n))) for n in batch_children_node_tokens]
        batch_children_node_tokens = [[c + [[]] * (max_num_children_per_node - len(c)) for c in sample] for sample in batch_children_node_tokens]  
        batch_children_node_tokens = [[[s + [0] * (max_num_of_subtoken_per_children_per_node - len(s)) for s in c] for c in sample] for sample in batch_children_node_tokens]
      
        return batch_node_types, batch_node_tokens, batch_children_indices, batch_children_node_types, batch_children_node_tokens

    def _onehot(self, i, total):
        return [1.0 if j == i else 0.0 for j in range(total)]

    def make_minibatch_iterator(self):
        
        (buckets, bucket_sizes) = self.data
        bucket_ids = list(buckets.keys())
        random.shuffle(bucket_ids)
        # for bucket_idx, bucket_data in buckets.items():
        for bucket_idx in bucket_ids:
            bucket_data = buckets[bucket_idx]
            # print(file)
            print("Shuffling data.....")
            random.shuffle(bucket_data)
            
            elements = []
            samples = 0
    
            for i, tree_data in enumerate(bucket_data):
            
                _, method_name, size = tree_data["tree"], tree_data["method_name"], tree_data["size"]
                if self.is_training:
                    if size > self.tree_size_threshold_lower and size < self.tree_size_threshold_upper:
                        elements.append(tree_data)
                        samples += 1
                else:
                    elements.append(tree_data)
                    samples += 1

                    
                if samples >= self.batch_size:
                
                    batch_node_indexes, batch_node_types, batch_node_tokens, batch_node_tokens_text, batch_children_indices, batch_children_node_types, batch_children_node_tokens, batch_labels , batch_tree_size, batch_file_path = self.make_batch(elements)
                    
                    # for node in batch_nodes:
                    #     print(len(node))
                    batch = {}
                    batch["batch_node_indexes"] = batch_node_indexes
                    batch["batch_node_types"] = np.asarray(batch_node_types)
                    batch["batch_node_tokens"] = np.asarray(batch_node_tokens)
                    batch["batch_node_tokens_text"] = batch_node_tokens_text
                    batch["batch_children_indices"] = np.asarray(batch_children_indices)
                    batch["batch_children_node_types"] = np.asarray(batch_children_node_types)
                    batch["batch_children_node_tokens"] = np.asarray(batch_children_node_tokens)
                    batch["batch_labels"] = np.asarray(batch_labels)
                    batch["batch_tree_size"] = batch_tree_size
                    batch["batch_file_path"] = batch_file_path
            
                    yield batch
                    elements = []
                    samples = 0
