# This script is to clean up the folder by copying all of the files in the sub-folders into the parent folder
import os
import shutil
import argparse

# N = 60  # the number of files in seach subfolder folder
parser = argparse.ArgumentParser()
parser.add_argument("--path", default="../sample_data_3/java-small/training", type=str, help="Path")
args = parser.parse_args()


def clean_up(path):
    for project in os.listdir(path):
        project_path = os.path.join(path,project)

        print("Project path : " + str(project_path))
        project_path_splits = project_path.split("/")
        project_name = project_path_splits[-1]
        print(project_name)
        for root, dirs, files in os.walk(project_path):  
            for file in files: 
                if file.endswith(".java"):
                    print("-----------------------")
                    print("Project path : " + str(project_path))
                    file_path = os.path.join(root,file)
                    print("Old path : " + str(file_path))
                    file_path_splits = file_path.split("/")
                    
                    print(file_path_splits)
                    upper_folder = file_path_splits[-2]
                    print(upper_folder)
                    project_name_index = 0
                    for i, split in enumerate(file_path_splits):
                        if split == project_name:
                            project_name_index = i
                    try:
                        
                        if upper_folder != project_name:
                            new_file_path = "**".join(file_path_splits[(project_name_index+1):(len(file_path_splits))])
                            new_file_path = os.path.join(project_path, new_file_path)
                            print("New path : " + str(new_file_path))
                            shutil.copy(file_path, new_file_path)
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
    clean_up(path)

if __name__ == '__main__':
    main()