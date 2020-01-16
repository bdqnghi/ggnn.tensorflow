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
parser.add_argument("--output", default="../preprocessed_data/train_label_vocab.txt", type=str, help="Output path")

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
	
	# input = "../sample_data/java-small/training"
	# output = "../preprocessed_data/token_vocabulary.csv"
	input_path = args.input
	output_path = args.output

	all_vocabularies = []

	for subdir , dirs, files in os.walk(input_path):
		for project in dirs:
			graphs_path = os.path.join(subdir,project + ".txt")
			print(graphs_path)
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
					
					if "?" in line:
						splits = line.split(" ")
						file_path_splits = splits[1].split("/")
						file_name = file_path_splits[len(file_path_splits)-1]
						method_name = file_name.split("_")[1].replace(".java","")
						all_vocabularies.append(method_name)

	all_vocabularies = exclude_tokens(all_vocabularies)

	unique_vocabularies = []
	for vocab in all_vocabularies:
		if vocab not in unique_vocabularies:
			unique_vocabularies.append(vocab)


	with open(output_path, "w") as f1:
		for i, v in enumerate(unique_vocabularies):
			f1.write(str(i) + "," + v)
			f1.write("\n")

if __name__ == "__main__":
    main()				
	 

