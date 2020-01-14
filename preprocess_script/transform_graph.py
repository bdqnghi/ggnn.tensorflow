import os
from concurrent.futures import ProcessPoolExecutor
import copy
import sys
import argparse
import re
sys.path.append("../utils/data_processing_utils")
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
    "--input", default="../sample_data/java-small-graph/training", type=str, help="Input path")
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
            # print(file)
            # if file.endswith(".java"):
            raw_file_path = os.path.join(subdir, file)
            print(raw_file_path)
            new_lines = []
            with open(raw_file_path, "r") as f:
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
                    if "?" not in line and "dummy" not in line:
                        splits = line.split(" ")
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

                            new_lines.append(",".join(new_line_arr))
            raw_file_path_splits = raw_file_path.split("/")
            project_name = raw_file_path_splits[len(raw_file_path_splits) - 2]
            new_file_path = os.path.join(args.output,project_name, file)
            os.makedirs(os.path.dirname(new_file_path), exist_ok=True)
            
            method_name = file.replace(".txt","").split("_")[1]
            method_name_index = "-1"
            if method_name in label_lookup:
                method_name_index = label_lookup[method_name]
            with open(new_file_path, "w") as f4:
                for new_line in new_lines:
                    f4.write(new_line)
                    f4.write("\n")
                f4.write("? " + str(method_name_index))
                f4.write("\n")
                            
                                



if __name__ == "__main__":
    main()
