# -*- coding: utf-8 -*-
# @author: Peter Lamut

import argparse
import os
import shutil

# N = 60  # the number of files in seach subfolder folder
parser = argparse.ArgumentParser(description='Split files into multiple subfolders.')
parser.add_argument("--num_file", default=1000, type=int, help="Num files")
parser.add_argument("--path", default="code2vec_data/java-small/validation/libgdx", type=str, help="Path")
args = parser.parse_args()

def move_files(abs_dirname):
    """Move files into subdirectories."""
    src_dir_splits = abs_dirname.split("/")
    project_name = src_dir_splits[len(src_dir_splits)-1]
    files = [os.path.join(abs_dirname, f) for f in os.listdir(abs_dirname)]

    i = 0
    curr_subdir = None

    for f in files:
        # create new subdir if necessary
        if i % N == 0:
            # print(abs_dirname)
            subproject_name = project_name + "_" + str(int(i / N + 1))
            subdir_name = abs_dirname.replace(project_name, subproject_name)
            # subdir_name = os.path.join(abs_dirname, project_name + "_" + str(int(i / N + 1)))
            os.mkdir(subdir_name)
            curr_subdir = subdir_name

        # move file to current dir
        f_base = os.path.basename(f)

        shutil.copy(f, os.path.join(subdir_name, f_base))
        i += 1




def main():
    """Module's main entry point (zopectl.command)."""
    
    src_dir = args.path

    if not os.path.exists(src_dir):
        raise Exception('Directory does not exist ({0}).'.format(src_dir))

    
    move_files(os.path.abspath(src_dir))


if __name__ == '__main__':
    main()