import os
# from concurrent.futures import ProcessPoolExecutor
from concurrent.futures import ThreadPoolExecutor as WorkerExecutor
import copy
import sys
import argparse
import pathlib

parser = argparse.ArgumentParser()
parser.add_argument("--input", default="sample_data/java-small/training", type=str, help="Input")
parser.add_argument("--output", default="sample_data/java-small/training", type=str, help="Output")
parser.add_argument("--file_type", default=".txt", type=str, help="file type")


args = parser.parse_args()


def main():
    input_path = args.input
    ouput_path = args.output
    file_type = args.file_type
    for root, dirs, files in os.walk(input_path):
        for file in files:
            if file.endswith(file_type):
                file_path = os.path.join(root, file)
                print(file_path)
                fname = pathlib.Path(file_path)
                creation_time = fname.stat().st_ctime
                last_modified_time = fname.stat().st_mtime
                processing_time = last_modified_time - creation_time
                print(creation_time)
                print(last_modified_time)
                print(processing_time)

if __name__ == "__main__":
    main()				
	 

