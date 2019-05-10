import os

with open("all_files.txt","r") as f:
    data = f.readlines()
    for line in data:
        file = line.replace("\n","")

        command = "python3 statement_test.py " + file
        os.system(command)