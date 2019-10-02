import os
import random
from shutil import copyfile
from concurrent.futures import ThreadPoolExecutor

import os
import random
from shutil import copyfile


rootdir = "PKU_raw_splitted"
pb_dir = "PKU_raw_splitted"
for subdir , dirs, files in os.walk(rootdir):
    for file in files:
        path = os.path.join(subdir,file)
        splits = path.split("/")
        splits = splits[2:]
        path_to_detect = "/".join(splits)

        corresponding_pb_path = os.path.join("PKU_pb_slice_pkl",path_to_detect.replace(".c",".pkl"))
        # print(corresponding_pb_path)
        task = subdir.split("/")[1]
        new_file_dir = os.path.join("PKU_pb_slice_pkl_splitted",task,splits[0])
        if not os.path.exists(new_file_dir):
            os.makedirs(new_file_dir)

        new_path = os.path.join("PKU_pb_slice_pkl_splitted",task, path_to_detect.replace(".c",".pkl"))

        try:
            copyfile(corresponding_pb_path,new_path)
        except Exception as e:
            print(e)