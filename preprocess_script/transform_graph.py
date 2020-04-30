import os
from concurrent.futures import ProcessPoolExecutor
import copy
import sys
import argparse
import re
sys.path.append("../utils")
import identifier_splitting
from bidict import bidict
from pathlib import Path

regex = '\\"\s+([^"]+)\s+\\"'
excluded_tokens = [",","{",";","}",")","(",'"',"'","`",""," ","[]","[","]","/",":","."," "]
parser = argparse.ArgumentParser()
parser.add_argument("--node_type_path",
                    default="../preprocessed_data/node_type_vocab.txt", type=str, help="Type vocab")
parser.add_argument("--node_token_path",
                    default="../preprocessed_data/token_vocab.txt", type=str, help="Token vocab")
parser.add_argument("--label_path",
                    default="../preprocessed_data/train_label_vocab.txt", type=str, help="Label vocab")
parser.add_argument(
    "--input", default="../sample_data/java-small/training", type=str, help="Input path")
parser.add_argument(
    "--output", default="../sample_data/java-small-graph-transformed/training", type=str, help="Output path")

args = parser.parse_args()

if not os.path.exists(args.output):
    Path(args.output).mkdir(parents=True, exist_ok=True)


def exclude_tokens(all_vocabularies):
    temp_vocabs = []
    for vocab in all_vocabularies:
        if vocab not in excluded_tokens:
            temp_vocabs.append(vocab)
    return temp_vocabs


def process_token(token):
    for t in excluded_tokens:
        token = token.replace(t, "")
    return token

def main():

    input_path = args.input
    output_path = args.output
    
    node_type_lookup = {}
    node_token_lookup = {}
    label_lookup = {}

    token_vocabulary_path = args.node_token_path
    node_type_vocabulary_path = args.node_type_path
    label_vocabulary_path = args.label_path

    with open(token_vocabulary_path, "r") as f1:
        data = f1.readlines()
        for line in data:
            splits = line.replace("\n", "").split(",")
            node_token_lookup[splits[1]] = int(splits[0])

    with open(node_type_vocabulary_path, "r") as f2:
        data = f2.readlines()
        for line in data:
            splits = line.replace("\n", "").split(",")
            node_type_lookup[splits[1]] = int(splits[0])
    
    with open(label_vocabulary_path, "r") as f3:
        data = f3.readlines()
        for line in data:
            splits = line.replace("\n", "").split(",")
            label_lookup[splits[1]] = int(splits[0])
    
    node_type_lookup = bidict(node_type_lookup)
    node_token_lookup = bidict(node_token_lookup)
    label_lookup = bidict(label_lookup)
    print(label_lookup)

    for subdir, dirs, files in os.walk(input_path):  
        for file in files:
            if file.endswith(".txt"):
                graphs_path = os.path.join(subdir,file)

                single_graph_file = []
                with open(graphs_path, "r") as f:
                    print("-----------------------")
                    lines = f.readlines()
                    for line in lines:
                       
                        # print(line)
                        line = line.replace("\n", "")
                        line = line.replace("'", "")
                        line = " ".join(line.split())
                        # line = strip(line)
                        # line
                        # print(line)
                        
                        new_line_arr = []
                        splits = line.split(" ")
                        if splits[0] != "?":
                            if "dummy" not in line:
                                if len(splits) == 3:
                                    source = splits[0]
                                    source_splits = source.split(",")
                                    source_node_id = source_splits[0].split(":")[0]
                                    source_node_type = source_splits[0].split(":")[1]
                                    source_node_type_id = node_type_lookup[source_node_type]
                                    
                                    sink = splits[2]
                                    sink_splits = sink.split(",")
                                    sink_node_id = sink_splits[0].split(":")[0]
                                    sink_node_type = sink_splits[0].split(":")[1]
                                    sink_node_type_id = node_type_lookup[sink_node_type]
                                    
                                    source_subtokens_str = "-"
                                    sink_subtokens_str = "-"
                                    if len(source_splits) == 2:
                                        source_token = source_splits[1]
                                        source_token = process_token(source_token)
                                        # print("Source token : "  + source_token)
                                        source_subtokens = identifier_splitting.split_identifier_into_parts(source_token)
                                        source_subtokens_ids = []
                                        for source_subtoken in source_subtokens:
                                            if source_subtoken and source_subtoken not in excluded_tokens:
                                                if source_subtoken in node_token_lookup:
                                                    source_subtoken_id = node_token_lookup[source_subtoken]
                                                else:
                                                    source_subtoken_id = node_token_lookup["<SPECIAL>"]
                                                source_subtokens_ids.append(str(source_subtoken_id))
                                        if len(source_subtokens_ids) > 0:
                                            source_subtokens_str = "-".join(source_subtokens_ids)

                                    if len(sink_splits) == 2:
                                        sink_token = sink_splits[1]
                                        sink_token = process_token(sink_token)
                                        # print("Sink token : " + sink_token)
                                        sink_subtokens = identifier_splitting.split_identifier_into_parts(sink_token)
                                        sink_subtokens_ids = []
                                        for sink_subtoken in sink_subtokens:
                                            if sink_subtoken and sink_subtoken not in excluded_tokens:
                                                if sink_subtoken in node_token_lookup:
                                                    sink_subtoken_id = node_token_lookup[sink_subtoken]   
                                                else:
                                                    sink_subtoken_id = node_token_lookup["<SPECIAL>"]
                                                sink_subtokens_ids.append(str(sink_subtoken_id))

                                        
                                        if len(sink_subtokens_ids) > 0:
                                            sink_subtokens_str = "-".join(sink_subtokens_ids)

                                    edge_id = splits[1]
                                    new_line_arr.append(str(source_node_id))
                                    new_line_arr.append(str(source_node_type_id))
                                    new_line_arr.append(str(source_subtokens_str))

                                    new_line_arr.append(edge_id)
                                    
                                    new_line_arr.append(str(sink_node_id))
                                    new_line_arr.append(str(sink_node_type_id))
                                    new_line_arr.append(str(sink_subtokens_str))

                                    single_graph_file.append(",".join(new_line_arr))
                        else:
                            # ? e/sample_data/java-small/training/project_2/Actor_getParent.java
                            print(line)
                            splits = line.split(" ")
                            # print(splits)
                            file_path_splits = splits[1].split("/")
                            print("File path : " + str(file_path_splits))
                            file_name = file_path_splits[len(file_path_splits)-1]
                            # project_name = file_path_splits[5]
                            # sub_dir_name = "_".join(file_path_splits[6:len(file_path_splits)-2])
                            if not sub_dir_name:
                                sub_dir_name = "-"
                            file_name_splits = file_name.split("_")
                            print(file_name_splits)
                            if len(file_name_splits) > 1:
                                method_name = file_name_splits[1].replace(".java","")
                                method_name_index = "-1"
                                if method_name in label_lookup:
                                    method_name_index = label_lookup[method_name]
                                single_graph_file.append("? " + str(method_name_index))

                                file_name = file_name.replace(".java",".txt")
                                file_name_with_project =  "**".join(file_path_splits[4:len(file_path_splits)-2]) + "**" + file_name
                                new_file_path = os.path.join(output_path,file_name_with_project)
                                print(new_file_path)
                                try:
                                    with open(new_file_path, "w") as f4:
                                        for new_line in single_graph_file:
                                            f4.write(new_line)
                                            f4.write("\n")
                                except Exception as e:
                                    print(e)
                                    new_file_path = os.path.join(output_path,file_name)
                                    with open(new_file_path, "w") as f4:
                                        for new_line in single_graph_file:
                                            f4.write(new_line)
                                            f4.write("\n")

                                # Reset the graph file object
                                single_graph_file = []                
                                    



if __name__ == "__main__":
    main()
