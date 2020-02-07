import os
# from concurrent.futures import ProcessPoolExecutor
from concurrent.futures import ThreadPoolExecutor as WorkerExecutor
import copy
import sys
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("--worker", default=16, type=int, help="Num worker")
parser.add_argument("--path", default="../sample_data/java-small/training", type=str, help="Path")
parser.add_argument("--fbs", default=1, type=int, help="Producing FBS")
parser.add_argument("--txt", default=0, type=int, help="Producing graph")
parser.add_argument("--pb", default=0, type=int, help="Producing PB")
parser.add_argument("--pkl", default=0, type=int, help="Producing Pickle of FBS format")

args = parser.parse_args()


def generate_folder_fbs(src_path, tgt_path):
	cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G " + src_path + " " + tgt_path
	print(cmd)
	os.system(cmd)

def generate_folder_pb(src_path, tgt_path):
	cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -p " + src_path + " " + tgt_path
	print(cmd)
	os.system(cmd)

def generate_folder_pkl(src_path, tgt_path):
	cmd = "docker run --rm -v $(pwd):/e -it yijun/fast " + src_path + " " + tgt_path
	print(cmd)
	os.system(cmd)

def generate_folder_graph(src_path, tgt_path):

	cmd = "docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast " + src_path + " " + tgt_path
	print(cmd)
	os.system(cmd)




# def execute(raw_path, fbs_path, graph_path):
#     generate_folder_fbs(raw_path, fbs_path)
#     generate_folder_graph(fbs_path, graph_path)
# def execute(raw_path, fbs_path, graph_path):
# 	if not os.path.exists(fbs_path):
# 		generate_folder_fbs(raw_path, fbs_path)
# 	else:
# 		print("The fbs path : " + str(fbs_path) + " exists, ignoring....")
# 	if not os.path.exists(graph_path) and os.path.exists(fbs_path):
# 		generate_folder_graph(fbs_path, graph_path)
# 	else:
# 		print("The graph path : " + str(graph_path) + " exists, ignoring....")


def main():
    path = args.path
    worker = args.worker
    with WorkerExecutor(max_workers=worker) as executor:   
        for subdir, dirs, files in os.walk(path):
            for project in dirs:
                raw_dir_path = os.path.join(subdir, project)
                fbss_path = os.path.join(subdir,project + ".fbs")
                pbs_path = os.path.join(subdir,project + ".pb")
                graphs_path = os.path.join(subdir,project + ".txt")
                pkls_path = os.path.join(subdir,project + ".pkl")

                if args.fbs == 1:
                    if os.path.exists(fbss_path):
                        if not os.path.getsize(fbss_path):
                            print("Deleting zero size fbs...")
                            os.remove(fbss_path)
                    if not os.path.exists(fbss_path):
                        print("Producing fbs....")
                        future_1 = executor.submit(generate_folder_fbs, raw_dir_path, fbss_path)  
                
                if args.pb == 1:
                    if os.path.exists(pbs_path):
                        if not os.path.getsize(pbs_path):
                            print("Deleting zero size pb...")
                            os.remove(pbs_path)
                    if not os.path.exists(pbs_path):
                        print("Producing pb....")
                        future_1 = executor.submit(generate_folder_pb, raw_dir_path, pbs_path)  
                
                if args.pkl == 1:
                    if os.path.exists(pkls_path):
                        if not os.path.getsize(pkls_path):
                            print("Deleting zero size pkl...")
                            os.remove(pkls_path)
                
                    if not os.path.exists(pkls_path): 
                        print("Producing pkl....")
                        if os.path.exists(pbs_path):
                            future_2 = executor.submit(generate_folder_pkl, pbs_path, pkls_path)

                if args.txt == 1:
                    if os.path.exists(graphs_path):
                        if not os.path.getsize(graphs_path):
                            os.remove(graphs_path)
                
                    if not os.path.exists(graphs_path): 
                        print("Producing graph....")
                        if os.path.exists(fbss_path):
                            future_2 = executor.submit(generate_folder_graph, fbss_path, graphs_path)
                
            # print(fbs_path)

if __name__ == "__main__":
    main()				
	 

