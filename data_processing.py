import os
from concurrent.futures import ProcessPoolExecutor
from concurrent.futures import ThreadPoolExecutor
import copy
import sys
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("--worker", default=64, type=int, help="Num worker")
parser.add_argument("--path", required=True, type=str, help="Path")
parser.add_argument("--concurrent", default=1, type=int, help="Path")

args = parser.parse_args()


def generate_fbs(src_path, tgt_path):
	cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G " + src_path + " " + tgt_path
	print(cmd)
	os.system(cmd)

def generate_graph(src_path, tgt_path):
	
	cmd = "docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast --label=1 --id_type=1 " + src_path + " " + tgt_path
	print(cmd)
	os.system(cmd)

def execute(raw_path, fbs_path, graph_path):
	if not os.path.exists(fbs_path):
		generate_fbs(raw_path, fbs_path)
	else:
		print("The fbs path : " + str(fbs_path) + " exists, ignoring....")
	if not os.path.exists(graph_path) and os.path.exists(fbs_path):
		generate_graph(fbs_path, graph_path)
	else:
		print("The graph path : " + str(graph_path) + " exists, ignoring....")

def main():
	
	path = args.path
	worker = args.worker
	
	with ThreadPoolExecutor(max_workers=worker) as executor:   
		for subdir , dirs, files in os.walk(path):
			for file in files:
				try:
					if file.endswith(".java"):
						raw_file_path = os.path.join(subdir,file)
						splits = raw_file_path.split("/")

						splits_fbs = copy.deepcopy(splits)
						splits_fbs[len(splits_fbs)-4] = "java-small-fbs"

						splits_graph = copy.deepcopy(splits)
						splits_graph[len(splits_graph)-4] = "java-small-graph"

						splits_fbs_dir = "/".join(splits_fbs[:len(splits_fbs)-1])
						splits_graph_dir = "/".join(splits_graph[:len(splits_graph)-1])

						# print(splits_fbs_dir)
						if not os.path.exists(splits_fbs_dir):
							os.makedirs(splits_fbs_dir)

						if not os.path.exists(splits_graph_dir):
							os.makedirs(splits_graph_dir)

						fbs_path =  "/".join(splits_fbs).replace(".java",".fbs")
						graph_path =  "/".join(splits_graph).replace(".java",".txt")
						future = executor.submit(execute, raw_file_path, fbs_path, graph_path)
				except Exception as e:
					print(e)

if __name__ == "__main__":
    main()				
	 

