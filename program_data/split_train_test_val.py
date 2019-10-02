import os
import random
from shutil import copyfile


rootdir = "PKU_raw"
splitted_dir = "PKU_raw_splitted"

all_files = []
# all_classes = []

def make_new_files(files, name):
    for file in files:
        old_path_splits = file.split("/")
        old_path_splits = old_path_splits[1:]
        new_file_dir = os.path.join(splitted_dir, name, old_path_splits[0])
        if not os.path.exists(new_file_dir):
            os.makedirs(new_file_dir)

        new_file_path = os.path.join(splitted_dir, name, "/".join(old_path_splits))
        copyfile(file, new_file_path)

for _, dirs, _ in os.walk(rootdir):
    for d in dirs:
        class_dir = os.path.join(rootdir,d)
        class_files = []
        for _, _, files in os.walk(class_dir):
            for file in files:
                file_path = os.path.join(class_dir,file)
                # print(file_path)
                class_files.append(file_path)

        random.shuffle(class_files)
        all_files.append(class_files)

for class_files in all_files:
    train_end = int((len(class_files)/10)*7)
  
    train_files = class_files[:train_end]

    remaining_files = class_files[train_end:]

    test_end = int((len(remaining_files)/3)*2)

    test_files = remaining_files[:test_end]
    val_files = remaining_files[test_end:]

    make_new_files(train_files,"train")
    make_new_files(test_files,"test")
    make_new_files(val_files,"validation")
       

# random.shuffle(all_files)

# train_files = all_files[:(len(all_files)/10)*7]
# test_files = all_files[(len(all_files)/10)*7:]

# splitted_dir = "PKU_raw_splitted"

