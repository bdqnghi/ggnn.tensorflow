# This script is to clean up the folder by copying all of the files in the sub-folders into the parent folder
import os
import shutil
import argparse

# N = 60  # the number of files in seach subfolder folder
parser = argparse.ArgumentParser()
parser.add_argument("--path", default="../transformed_data", type=str, help="Path")
args = parser.parse_args()


def clean_up(path):
    for project in os.listdir(path):
        project_path = os.path.join(path,project)
        print(project_path)
        for root, dirs, files in os.walk(project_path):  
            for file in files: 
                if file.endswith(".java"):
                    path_file = os.path.join(root,file)
                    print(path_file)
                    try:
                        shutil.copy2(path_file,project_path) # change you destination dir
                    except Exception as e:
                        print(e)

        if os.path.isdir(project_path):
            for content in os.listdir(project_path):
                content_path = os.path.join(project_path, content)
                # print(content_path)
                if os.path.isdir(content_path):
                    # print(content_path)
                    shutil.rmtree(content_path)


def main():
    path = args.path
    transformed_datasets = ["BooleanExchange", "LoopExchange", "PermuteStatement", "RenameVariable", "SwitchConditional", "TryCatch", "UnreachableStatement", "UnusedStatement"]
    for transformed_dataset in transformed_datasets:
        transformed_dataset_path = os.path.join(path, transformed_dataset, "java-med", "test")
        clean_up(path)

if __name__ == '__main__':
    main()