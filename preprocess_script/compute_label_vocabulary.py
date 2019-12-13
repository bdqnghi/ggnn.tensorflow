import os
from concurrent.futures import ProcessPoolExecutor
import copy
import sys
import argparse
import re


# parser = argparse.ArgumentParser()
# parser.add_argument("--worker", default=10, type=int, help="Num worker")
# parser.add_argument("--path", required=True, type=str, help="Path")

# args = parser.parse_args()


def main():
	
	# path = args.path
	path = "../sample_data/java-small-graph/training"

	all_vocabularies = []

	for subdir , dirs, files in os.walk(path):
		
		for file in files:
			name_splits = file.split(".")
			method_name = name_splits[0].split("_")[1]
			all_vocabularies.append(method_name)

	all_vocabularies = list(set(all_vocabularies))
	# all_vocabularies = exclude_tokens(all_vocabularies)
	
	output = "../preprocessed_data/label_vocabulary.csv"

	with open(output, "w") as f1:
		for i, v in enumerate(all_vocabularies):
			f1.write(str(i) + "," + v)
			f1.write("\n")

if __name__ == "__main__":
    main()				
	 

