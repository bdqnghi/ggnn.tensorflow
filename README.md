# A Tensorflow Implementation of Gated Graph Neural Networks (GGNN) for Graph Classification

This is a Tensorflow implementation of the Gated Graph Neural Networks (GGNN) as described in the paper [Gated Graph Sequence Neural Networks, ICLR 2016](https://arxiv.org/abs/1511.05493) by Y. Li, D. Tarlow, M. Brockschmidt, and R. Zemel.

Tricks to improve training time and faster convergence:
- Batch graphs with similar size together instead of randomly shuffling and batch.
- Use dense graph representation for small graphs, and sparse graph representation for large graphs.

We parse the files into the graph representation based on the details of the paper [Learning to Represent Programs with Graphs, ICLR 2017](https://arxiv.org/abs/1711.00740).

# Tasks

## Code Classification
- Sorting Algorithms (SA Dataset): 10 sorting problems, collected from Github, which are: insertion-sort, merge-sort, topological-sort, heap-sort, bubble-sort, radix-sort, shell-sort, quick-sort, selection-sort, bucket-sort

- Peking University Dataset (OJ Dataset): 104 programming problems, which comprises of 52000 cpp files from the paper [Convolutional Neural Networks over Tree Structures for Programming Language Processing, AAAI 2015](https://arxiv.org/abs/1409.5718).

## What is GGNN?
- Solve graph-structured data and problems
- A gated propagation model (same idea as GRU) to compute node representations
- Unroll recurrence for a fixed number of steps and use backpropagation through time

## Requirements
- python==3.6
- Tensorflow>=1.8

## Run 
Train and test the GGNN:
```
python3 train_ggnn_code_classification.py
python3 test_ggnn_code_classification
```

There is already a pretrained-model on the SA Dataset stored in model/, by simply running ```python3 test_ggnn_code_classification```, you can get the result like this: 

Accuracy: 0.8514285714285714

             precision    recall  f1-score   support

          1       0.71      0.62      0.67        16
          2       0.89      1.00      0.94        17
          3       0.78      0.93      0.85        15
          4       0.80      0.89      0.84        18
          5       0.76      0.80      0.78        20
          6       0.85      0.81      0.83        21
          7       0.91      1.00      0.95        20
          8       0.94      1.00      0.97        17
          9       1.00      0.67      0.80        15
         10       0.92      0.75      0.83        16

avg / total       0.86      0.85      0.85       175


## References
- [GGNN Implementation for learning properties of chemical molecules](https://github.com/Microsoft/gated-graph-neural-network-samples)
- [Neural Message Passing for Quantum Chemistry](https://arxiv.org/pdf/1704.01212.pdf), ICML 2017
- [Gated Graph Sequence Neural Networks](https://arxiv.org/abs/1511.05493), ICLR 2016
- [Learning to Represent Programs with Graphs](https://arxiv.org/abs/1711.00740), ICLR 2018
- For a pytorch version, please refer to: https://github.com/bdqnghi/ggnn_graph_classification.
