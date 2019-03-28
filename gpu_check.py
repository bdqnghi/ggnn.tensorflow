# A simple script to check if tensorflow can call GPU devices
from tensorflow.python.client import device_lib 
print(device_lib.list_local_devices())