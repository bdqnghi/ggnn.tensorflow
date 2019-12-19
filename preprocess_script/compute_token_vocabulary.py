import os
from concurrent.futures import ProcessPoolExecutor
import copy
import sys
import argparse
import re

regex = '\\"\s+([^"]+)\s+\\"'
excluded_tokens = [",","{",";","}",")","(",'"',"'","`",""," "]
parser = argparse.ArgumentParser()
parser.add_argument("--input", required=True, type=str, help="Input path")
parser.add_argument("--output", required=True, type=str, help="Output path")

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
			print(file)
			# if file.endswith(".java"):
			raw_file_path = os.path.join(subdir,file)
			
			with open(raw_file_path,"r") as f:
				lines = f.readlines()
				for line in lines:
					try:
						print(line)
						line = line.replace("\n","")
						line = line.replace("'","")
						line = " ".join(line.split())
						# line = strip(line)
						# line
						splits = line.split(" ")
						source = splits[0]
						if len(splits) == 3:
							sink = splits[2]

							source_splits = source.split(",")
							source_node_id = source_splits[0].split(":")[0]
							source_node_type = source_splits[0].split(":")[1]

							if len(source_splits) == 2:
								source_token = source_splits[1]
								source_token = process_token(source_token)
								# print("Source token : "  + source_token)
								all_vocabularies.append(source_token)

							sink_splits = sink.split(",")
							sink_node_id = sink_splits[0].split(":")[0]
							sink_node_type = sink_splits[0].split(":")[1]
							if len(sink_splits) == 2:
								sink_token = sink_splits[1]
								sink_token = process_token(sink_token)
								# print("Sink token : " + sink_token)

								all_vocabularies.append(sink_token)
						
						
					except Exception as e:
						print(e)

	all_vocabularies = list(set(all_vocabularies))
	all_vocabularies = exclude_tokens(all_vocabularies)
	
	with open(output_path, "w") as f1:
		for i, v in enumerate(all_vocabularies):
			f1.write(str(i) + "," + v)
			f1.write("\n")

if __name__ == "__main__":
    main()				
	 

