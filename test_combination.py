from collections import defaultdict 
from itertools import combinations


graph = defaultdict(list)


class Node:
  parent = None:
  ids = list()
  children = list()


components = ['a', 'b', 'c', 'd']


def construct_graph(components):

    for component in components:
        node = Node()
        node.ids.append(component)
        
        temp_components = components.copy()
        temp_components.remove(component)
        
        output = output[1:]

        print("--------")
        print(component)
        print(output)
    # graph[components].