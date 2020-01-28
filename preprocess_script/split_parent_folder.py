# -*- coding: utf-8 -*-
# @author: Peter Lamut

import argparse
import os
import shutil

# N = 60  # the number of files in seach subfolder folder
parser = argparse.ArgumentParser(description='Split files into multiple subfolders.')
parser.add_argument("--num_files", default=1000, type=int, help="Num files")
parser.add_argument("--threshold", default=1000, type=int, help="Threshold to split")
parser.add_argument("--path", default="../sample_data_2/java-small/training", type=str, help="Path")
args = parser.parse_args()

def move_files(abs_dirname, num_files):
    """Move files into subdirectories."""
    src_dir_splits = abs_dirname.split("/")
    project_name = src_dir_splits[len(src_dir_splits)-1]
    files = [os.path.join(abs_dirname, f) for f in os.listdir(abs_dirname)]

    i = 0
    curr_subdir = None

    for f in files:
        # create new subdir if necessary
        if i % num_files == 0:
            # print(abs_dirname)
            subproject_name = project_name + "_" + str(int(i / num_files + 1))
            subdir_name = abs_dirname.replace(project_name, subproject_name)
            # subdir_name = os.path.join(abs_dirname, project_name + "_" + str(int(i / N + 1)))
            print(subdir_name)
            if os.path.exists(subdir_name):
                shutil.rmtree(subdir_name)
            os.mkdir(subdir_name)
            curr_subdir = subdir_name

        # move file to current dir
        f_base = os.path.basename(f)
        target_sub_file = os.path.join(subdir_name, f_base)
        shutil.copy(f, target_sub_file)
        i += 1




def main():
    """Module's main entry point (zopectl.command)."""
    
    path = args.path
    num_files = args.num_files
    threshold = args.threshold
    if not os.path.exists(path):
        raise Exception('Directory does not exist ({0}).'.format(path))
    
    for subdir, dirs, files in os.walk(path):
        for project in dirs:
            raw_dir_path = os.path.join(subdir, project)
            print(raw_dir_path)
            _, _, files_in_subdir = next(os.walk(raw_dir_path))
            file_count = len(files_in_subdir)
            if file_count > threshold:
                
                move_files(raw_dir_path, num_files)
                shutil.rmtree(raw_dir_path)
    # remove the folder
    


if __name__ == '__main__':
    main()