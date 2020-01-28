import os
from concurrent.futures import ProcessPoolExecutor
import copy
import sys
import argparse
import re
sys.path.append("../utils")
import identifier_splitting

regex = '\\"\s+([^"]+)\s+\\"'
excluded_tokens = [",","{",";","}",")","(",'"',"'","`",""," ","[]","[","]","/",":","."," "]
parser = argparse.ArgumentParser()
parser.add_argument("--input", default="../sample_data/java-small/training", type=str, help="Input path")
parser.add_argument("--output", default="../preprocessed_data/token_vocab.txt", type=str, help="Output path")

args = parser.parse_args()
def exclude_tokens(all_vocabularies):
	temp_vocabs = []
	for vocab in all_vocabularies:
		if vocab not in excluded_tokens:
			temp_vocabs.append(vocab)
	return temp_vocabs

def process_token(token):
	for t in excluded_tokens:
		token = token.replace(t,"")
	return token

def main():
	
	# input = "../sample_data/java-small-graph/training"
	# output = "../preprocessed_data/token_vocabulary.csv"
	input_path = args.input
	output_path = args.output

	all_vocabularies = []

	for subdir , dirs, files in os.walk(input_path):
		for file in files:
			if file.endswith(".txt")
				graphs_path = os.path.join(subdir,file)
				print("Compute token for : " + str(graphs_path))
				with open(graphs_path,"r") as f:
					lines = f.readlines()
					for line in lines:
						print(line)
					
						line = line.replace("\n","")
						line = line.replace("'","")
						line = " ".join(line.split())
						# line = strip(line)
						# line
						splits = line.split(" ")
						
						if "?" not in line:
							if len(splits) == 3:
								source = splits[0]
								source_splits = source.split(",")
								source_node_id = source_splits[0].split(":")[0]
								source_node_type = source_splits[0].split(":")[1]

								sink = splits[2]
								sink_splits = sink.split(",")
								sink_node_id = sink_splits[0].split(":")[0]
								sink_node_type = sink_splits[0].split(":")[1]

								if len(source_splits) == 2:
									source_token = source_splits[1]
									source_token = process_token(source_token)
									# print("Source token : "  + source_token)
									source_subtokens = identifier_splitting.split_identifier_into_parts(source_token)
									for source_subtoken in source_subtokens:
										all_vocabularies.append(source_subtoken)

								if len(sink_splits) == 2:
									sink_token = sink_splits[1]
									sink_token = process_token(sink_token)
									# print("Sink token : " + sink_token)
									sink_subtokens = identifier_splitting.split_identifier_into_parts(sink_token)
									for sink_subtoken in sink_subtokens:
										all_vocabularies.append(sink_subtoken)
			
	all_vocabularies = exclude_tokens(all_vocabularies)

	unique_vocabularies = []
	for vocab in all_vocabularies:
		if vocab not in unique_vocabularies:
			unique_vocabularies.append(vocab)
	unique_vocabularies.append("<SPECIAL>")
	
	with open(output_path, "w") as f1:
		for i, v in enumerate(unique_vocabularies):
			f1.write(str(i) + "," + v)
			f1.write("\n")

if __name__ == "__main__":
    main()				
	 

