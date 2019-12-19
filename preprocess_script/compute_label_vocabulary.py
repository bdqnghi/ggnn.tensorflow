import os
from concurrent.futures import ProcessPoolExecutor
import copy
import sys
import argparse
import re

parser = argparse.ArgumentParser()
parser.add_argument("--input", required=True, type=str, help="Input path")
parser.add_argument("--output", required=True, type=str, help="Output path")

args = parser.parse_args()

def main():
	
	# path = args.path
	# input_path = "../sample_data/java-small-graph/training"
	# output_path = "../preprocessed_data/label_vocabulary.csv"
	input_path = args.input
	output_path = args.output

	all_vocabularies = []

	for subdir , dirs, files in os.walk(input_path):
		
		for file in files:
			try:
				name_splits = file.split(".")
				method_name = name_splits[0].split("_")[1]
				all_vocabularies.append(method_name)
			except Exception as e:
				print(e)

	all_vocabularies = list(set(all_vocabularies))
	# all_vocabularies = exclude_tokens(all_vocabularies)


	with open(output_path, "w") as f1:
		for i, v in enumerate(all_vocabularies):
			f1.write(str(i) + "," + v)
			f1.write("\n")

if __name__ == "__main__":
    main()				
	 

