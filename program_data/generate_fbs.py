import os
import random
from shutil import copyfile
from concurrent.futures import ThreadPoolExecutor

import os
import random
from shutil import copyfile


rootdir = "PKU_raw_splitted"

fbs_dir = "PKU_fbs_splitted"

def execute_command(src_path,tgt_path):
    cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G " + src_path + " " + tgt_path
    print(cmd)
    os.system(cmd)

with ThreadPoolExecutor(max_workers=20) as executor:   


    for subdir , dirs, files in os.walk(rootdir):
        for file in files:
            raw_file_path = os.path.join(subdir,file)
            splits = raw_file_path.split("/")
            splits[0] = fbs_dir
            # print(splits)
            fbs_path =  "/".join(splits).replace(".c",".fbs")
            # print(fbs_path)
            new_dir_path = "/".join(splits[:3])
            if not os.path.exists(new_dir_path):
                os.makedirs(new_dir_path)

            # execute_command(raw_file_path,fbs_path)
            # fbs_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G " + raw_file_path + " " + fbs_path
            # os.system(fbs_cmd)
            future = executor.submit(execute_command, raw_file_path, fbs_path)