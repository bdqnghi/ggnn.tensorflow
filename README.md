# A Tensorflow Implementation of Gated Graph Neural Networks (GGNN) for Graph Classification

This is a Tensorflow implementation of the Gated Graph Neural Networks (GGNN) as described in the paper [Gated Graph Sequence Neural Networks, ICLR 2016](https://arxiv.org/abs/1511.05493) by Y. Li, D. Tarlow, M. Brockschmidt, and R. Zemel.

This implementation focuses on the Graph Level classification task. Concretely, we focus the Program Classification, in which each program is represented in the form of a graph.

Tricks to improve training time and faster convergence:
- Batch graphs with similar size together instead of randomly shuffling and batch.
- Use dense graph representation for small graphs, and sparse graph representation for large graphs.

We parse the files into the graph representation based on the details of the paper [Learning to Represent Programs with Graphs, ICLR 2017](https://arxiv.org/abs/1711.00740).

# Tasks

## Code Classification
- Dataset 1: 10 sorting problems, collected from Github, which are: insertion-sort, merge-sort, topological-sort, heap-sort, bubble-sort, radix-sort, shell-sort, quick-sort, selection-sort, bucket-sort

- Dataset 2: 104 programming problems, which comprises of 52000 cpp files from the paper [Convolutional Neural Networks over Tree Structures for Programming Language Processing, AAAI 2015](https://arxiv.org/abs/1409.5718).

## Method's Name Prediction

- Java small: This dataset is based on the dataset of Allamanis et al. (ICML'2016), with the difference that training/validation/test is split by-project rather than by-file. This dataset contains 9 Java projects for training, 1 for validation and 1 for testing. Overall, it contains about 700K examples.

- Java medium: A dataset of the 1000 top-starred Java projects from GitHub. It contains 800 projects for training, 100 for validation and 100 for testing. Overall, it contains about 4M examples.

- Java large:  A dataset of the 9500 top-starred Java projects from GitHub that were created since January 2007. It contains 9000 projects for training, 200 for validation and 300 for testing. Overall, it contains about 16M examples.


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
python3 main_ggnn.py
python3 test_ggnn.py
```

## References
- [GGNN Implementation for learning properties of chemical molecules](https://github.com/Microsoft/gated-graph-neural-network-samples)
- [Neural Message Passing for Quantum Chemistry](https://arxiv.org/pdf/1704.01212.pdf), ICML 2017
- [Gated Graph Sequence Neural Networks](https://arxiv.org/abs/1511.05493), ICLR 2016
- [Learning to Represent Programs with Graphs](https://arxiv.org/abs/1711.00740), ICLR 2018
- For a pytorch version, please refer to: https://github.com/bdqnghi/ggnn_graph_classification.
