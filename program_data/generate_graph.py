import os
import random
from shutil import copyfile
from concurrent.futures import ThreadPoolExecutor

import os
import random
from shutil import copyfile


rootdir = "PKU_pb_slice_pkl_splitted"

for subdir , dirs, files in os.walk(rootdir):
    for file in files: