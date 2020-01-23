
import random
#import pickle
import pyarrow

saved_input_filename = "sample_data/java-small-graph-transformed/java-small-graph-transformed-training.pkl"

input_file = open(saved_input_filename, 'rb')
buf = input_file.read()
buckets, bucket_sizes, bucket_at_step = pyarrow.deserialize(buf)
input_file.close()

for bucket_idx, bucket_data in buckets.items():
    print("-------------")
    print("Bucket id : " + str(bucket_idx))
    print("Bucket size : " + str(bucket_sizes[bucket_idx]))
    print("Num items : " + str(len(bucket_data)))