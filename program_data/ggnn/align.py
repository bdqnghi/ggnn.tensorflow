#!/usr/bin/env python3
import argparse
import os
import os.path
import pickle
from collections import OrderedDict
parser = argparse.ArgumentParser()
parser.add_argument('--lang1', default='cpp', help='language 1')
parser.add_argument('--lang2', default='java', help='language 2')
parser.add_argument('--output', default='maps', help='output')
parser.add_argument('data', nargs='+', help='data sets')
opt = parser.parse_args()
print(opt)
maps = {}
maps1 = {}
maps1_filename = 'maps.%s.pkl' % opt.lang1
if os.path.exists(maps1_filename):
   with open(maps1_filename, 'rb') as f:
        maps1 = pickle.load(f)
OrderedDict(sorted(maps1.items(), key=lambda t: t[0]))
maps2_filename = 'maps.%s.pkl' % opt.lang2
if os.path.exists(maps2_filename):
   with open(maps2_filename, 'rb') as f:
        maps2 = pickle.load(f)
mapping = {}
for key, value in maps2.items():
    if key in maps1.keys():
        mapping[value] = maps1[key]
    else:
        maps1[key] = len(mapping.keys())
        mapping[value] = maps1[key]

# using mapping to align the lang2 with lang1
def aligning(source, target, mapping):
    print("%s %s" % (source, target))
    with open(source, 'r') as s:
      with open(target, 'w') as t:
          for line in s.readlines():
             numbers = line.rstrip().split()
             if len(numbers)>2 and numbers[0]!='?':
                 line_t = "%s %s %s\n" % (mapping[numbers[0]], numbers[1], mapping[numbers[2]])
             else:
                 line_t = line
             t.write(line_t)
          s.close()
          t.close()

from_folder=opt.data[0]
to_folder=opt.data[1]

for folder in ['train', 'test']:
   for f in os.listdir(os.path.join(from_folder, folder)):
       if not os.path.exists(os.path.join(to_folder, folder)):
          os.makedirs(os.path.join(to_folder, folder))
       aligning(os.path.join(from_folder, folder, f), os.path.join(to_folder, folder, f), mapping)

with open("maps.cll.pkl", 'wb') as f:
   pickle.dump(mapping, f, 2)
   f.close()
