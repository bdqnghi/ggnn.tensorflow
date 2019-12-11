import os
from concurrent.futures import ProcessPoolExecutor
import copy
import sys



def generate_fbs(src_path, tgt_path):
	cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G " + src_path + " " + tgt_path
	print(cmd)
	os.system(cmd)

def generate_graph(src_path, tgt_path):
	cmd = "docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast --label=1 --id_type=1 " + src_path + " " + tgt_path
	print(cmd)
	os.system(cmd)

def execute(raw_path, fbs_path, graph_path):
	generate_fbs(raw_path, fbs_path)
	generate_graph(fbs_path, graph_path)

def main():
	
	path = sys.argv[1]
	
	with ProcessPoolExecutor(max_workers=20) as executor:   
		for subdir , dirs, files in os.walk(path):
			for file in files:
				if file.endswith(".java"):
					raw_file_path = os.path.join(subdir,file)
					splits = raw_file_path.split("/")

					splits_fbs = copy.deepcopy(splits)
					splits_fbs[len(splits_fbs)-4] = "java_small_fbs"

					splits_graph = copy.deepcopy(splits)
					splits_graph[len(splits_graph)-4] = "java_small_graph"

					splits_fbs_dir = "/".join(splits_fbs[:len(splits_fbs)-1])
					splits_graph_dir = "/".join(splits_graph[:len(splits_graph)-1])

					print(splits_fbs_dir)
					if not os.path.exists(splits_fbs_dir):
						os.makedirs(splits_fbs_dir)

					if not os.path.exists(splits_graph_dir):
						os.makedirs(splits_graph_dir)

					fbs_path =  "/".join(splits_fbs).replace(".java",".fbs")
					graph_path =  "/".join(splits_graph).replace(".java",".txt")
					future = executor.submit(execute, raw_file_path, fbs_path, graph_path)

if __name__ == "__main__":
    main()				
	 

