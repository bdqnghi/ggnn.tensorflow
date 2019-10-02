import os

rootdir = "PKU_raw"

for subdir, dirs, files in os.walk(rootdir):
    for file in files:
        # f=open(file,'r')
        print(file)