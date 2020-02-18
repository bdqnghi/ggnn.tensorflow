import os
# path = "~/data/rabin/data/code2vec/transforms"
path = "sample_data"
for transformation_folder in os.listdir(path):
    # for transformation_folder in dirs:
    print("--------------")
    transformation_folder_path = os.path.join(path, transformation_folder)
    print(transformation_folder_path)
    train_path = os.path.join(path, transformation_folder,"training")
    test_path = os.path.join(path, transformation_folder,"test")
    val_path = os.path.join(path, transformation_folder,"validation")
    train_path_count = sum([len(files) for r, d, files in os.walk(train_path)])
    test_path_count = sum([len(files) for r, d, files in os.walk(test_path)])
    val_path_count = sum([len(files) for r, d, files in os.walk(test_path)])
    train_path_line = train_path + " " + str(train_path_count)
    test_path_line = test_path + " " + str(test_path_count)
    val_path_line = val_path + " " + str(val_path_count)
    with open("counting.txt", "a") as f:
        f.write(train_path_line)
        f.write("\n")
        f.write(test_path_line)
        f.write("\n")
        f.write(val_path_line)
        f.write("\n")

