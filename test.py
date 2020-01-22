import numpy as np
def _onehot(i, total):
    zeros = np.zeros(total)
    zeros[i] = 1.0
    return zeros

num_labels = 200000
# label_lookup_onehot = {label: _onehot(label, num_labels) for label in range(0, num_labels)}
# print(label_lookup_onehot)
labels = [] 
for label in range(0, num_labels):
    label = _onehot(label, num_labels)
    labels.append(label)