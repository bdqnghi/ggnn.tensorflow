

import subprocess
import os
import random
from shutil import copyfile
from concurrent.futures import ProcessPoolExecutor
import concurrent.futures
# ROOT = "/home/nghibui/codes/bi-tbcnn/"
# src_dir = "code_index"
# tgt_dir = "pb_code_index"

src_dir = "../program_data/all_data_test"

for root, subdirs, files in os.walk(src_dir):
    for file in files:
        file_path = os.path.join(root,file)
        # print(path)
        if "java_statement_test" in file_path:
            with open(file_path,"r") as f:
                data = f.read()
                print(data)