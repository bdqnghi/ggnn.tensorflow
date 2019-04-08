import argparse
import random

import pickle

import tensorflow as tf
from utils.data.dataset import MonoLanguageProgramData
from utils.data.dataset import load_single_program
from utils.utils import ThreadedIterator
from utils.dense_ggnn import DenseGGNNModel
import os
import sys

import numpy as np
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score


fbs_cmd = "docker run --rm -v $(pwd):/e -it yijun/fast -S -G program_data/test_data/1.java program_data/test_data/1.fbs"
ggnn_cmd = "docker run -v $(pwd):/e --entrypoint ggnn -it yijun/fast program_data/test_data/1.fbs program_data/test_data/train.txt program_data/test_data/1.txt"

os.system(fbs_cmd)
os.system(ggnn_cmd)

# load_single_program()