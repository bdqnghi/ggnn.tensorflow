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

class MethodNamePredictionData():
   
    def __init__(self, opt, data_path, is_training=True, is_testing=False, is_validating=False,):
        
        trees = self.load_program_data(data_path)
      
        self.trees = trees
        self.data = self.process_raw_trees()




    def load_program_data(self, directory):
        trees = []
        for subdir , dirs, files in os.walk(directory): 
            for file in tqdm(files):
                if file.endswith(".pkl"):
                    pkl_file_path = os.path.join(subdir,file)
                    pb_representation = self.load_tree_from_pickle_file(pkl_file_path)
                    # print(pb_representation)
                    root = pb_representation.element

                   
                    # print(pb_representation)
                    # root = pb_representation.element
                    # filename: "/e/java-small/training/project_2/DelaunayTriangulator_trim.java"
                    file_name = root.unit.filename.replace(".java","")
                    file_name_splits = file_name.split("/")
                    method_name = file_name_splits[len(file_name_splits)-1].split("_")[1]
                    tree, size = self._traverse_tree(root)
                    
                    tree_data = {
                        "tree": tree,
                        "method_name": method_name,
                        "size": size
                    }
                    # print(tree_data)
                    trees.append(tree_data)
         
        return trees

    def load_tree_from_pickle_file(self, file_path):
        """Builds an AST from a script."""
   
        with open(file_path, 'rb') as file_handler:
            tree = pickle.load(file_handler)
            # print(tree)
            return tree
        return "error"

    def _traverse_tree(self, root):
        num_nodes = 1
        queue = [root]

        root_json = {
            "node": str(root.srcml_kind),

            "children": []
        }
        queue_json = [root_json]
        while queue:
        
            current_node = queue.pop(0)
            num_nodes += 1
            # print (_name(current_node))
            current_node_json = queue_json.pop(0)


            children = [x for x in current_node.child]
            queue.extend(children)
        
            for child in children:
                # print "##################"
                #print child.kind

                child_json = {
                    "node": str(child.srcml_kind),
                    "children": []
                }

                current_node_json['children'].append(child_json)
                queue_json.append(child_json)
                # print current_node_json
    
        return root_json, num_nodes

    def process_raw_trees(self):
        bucket_sizes = np.array(list(range(30 , 7500 , 30)))
        buckets = defaultdict(list)

        for tree_data in self.trees:
            tree, method_name, tree_size = tree_data["tree"], tree_data["method_name"], tree_data["size"]

            chosen_bucket_idx = np.argmax(bucket_sizes > tree_size)
            buckets[chosen_bucket_idx].append(tree_data)

        return buckets, bucket_sizes


    def batch_samples(self, elements, batch_size):
        """Batch samples from a generator"""
        nodes, children, labels = [], [], []
        samples = 0
        for n, c, l in elements:
            # print n
            # print c
            # print l
            # if len(c) > 6000 and len(c) < 20000:
            nodes.append(n)
            children.append(c)
            labels.append(l)
            samples += 1


            if samples >= batch_size:
                yield _pad_batch(nodes, children, labels)
                nodes, children, labels = [], [], []
                samples = 0

        if nodes:
            yield _pad_batch(nodes, children, labels)

    def make_batch(self, elements):
        batch_data = {'adjacency_matrix': [], 'node_type_indices': [], "node_token_indices": [],  'labels': []}

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

    # def make_minibatch_iterator(self):
    #     buckets, bucket_sizes = self.data
    #     for bucket_idx, bucket_data in buckets.items():

    #         elements = []
    #         samples = 0
            
    #         # if len(bucket_data) > 5:
    #         for i, element in enumerate(bucket_data):

    #             elements.append(element)
    #             samples += 1

    #             if (samples >= self.batch_size) or ((i == len(bucket_data)-1)):
    #                 if len(elements) > 0:

    #                     yield batch
    #                     elements = []
    #                     samples = 0

    def make_batch(self, elements):

        batch_nodes, batch_children, batch_labels = [], [], []

        for tree_data in elements:
            # print(file)
            tree, method_name, size = tree_data["tree"], tree_data["method_name"], tree_data["size"]
            # print(tree)
            nodes = []
            children = []
            label = method_name

            queue = [(tree, -1)]
            # print queue
            while queue:
                # print "############"
                node, parent_ind = queue.pop(0)
                # print node
                # print parent_ind
                node_ind = len(nodes)
                # print "node ind : " + str(node_ind)
                # add children and the parent index to the queue
                queue.extend([(child, node_ind) for child in node['children']])
                # create a list to store this node's children indices
                children.append([])
                # add this child to its parent's child list
                if parent_ind > -1:
                    children[parent_ind].append(node_ind)
                
                n = str(node['node'])
                nodes.append(int(n))

            batch_nodes.append(nodes)
            batch_children.append(children)
            batch_labels.append(label)



    def make_minibatch_iterator(self):
        """Creates a generator that returns a tree in BFS order with each node
        replaced by its vector embedding, and a child lookup table."""
        buckets, bucket_sizes = self.data
        for bucket_idx, bucket_data in buckets.items():

            elements = []
            samples = 0
            
            # if len(bucket_data) > 5:
            for i, element in enumerate(bucket_data):

                elements.append(element)
                samples += 1

                if (samples >= self.batch_size) or ((i == len(bucket_data)-1)):
                    if len(elements) > 0:

                        yield batch
                        elements = []
                        samples = 0


    def _pad_batch(self, nodes, children, labels):
        if not nodes:
            return [], [], []
        max_nodes = max([len(x) for x in nodes])
        max_children = max([len(x) for x in children])
        feature_len = len(nodes[0][0])
        child_len = max([len(c) for n in children for c in n])

        nodes = [n + [[0] * feature_len] * (max_nodes - len(n)) for n in nodes]
        # pad batches so that every batch has the same number of nodes
        children = [n + ([[]] * (max_children - len(n))) for n in children]
        # pad every child sample so every node has the same number of children
        children = [[c + [0] * (child_len - len(c)) for c in sample] for sample in children]

        return nodes, children, labels

    def _onehot(self, i, total):
        return [1.0 if j == i else 0.0 for j in range(total)]