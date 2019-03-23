package com.algorithmhelper.graphs.pathfinding;

import com.algorithmhelper.datastructures.lists.Queue;
import com.algorithmhelper.datastructures.lists.Stack;
import com.algorithmhelper.datastructures.lists.QueueDynamicArray;
import com.algorithmhelper.datastructures.lists.StackDynamicArray;
import com.algorithmhelper.graphs.graphs.DirectedGraph;

public class KahnsTopologicalSortAlgorithmStack<T extends Comparable<T>> {

    private Queue<T> topologicalOrdering;

    
    public KahnsTopologicalSortAlgorithmStack(DirectedGraph<T> G) {
        if (G == null)
            throw new IllegalArgumentException("constructor with null graph G");

        topologicalOrdering = new QueueDynamicArray<>();

        if (G.V() == 0)
            return;

        kahnsTopologicalSort(G);
    }

    
    private void kahnsTopologicalSort(DirectedGraph<T> G) {
        DirectedGraph<T> reverseGraph = G.getReverseGraph();
        Stack<T> stack = new StackDynamicArray<>();

        for (T u : reverseGraph.getVertices()) {
            if (reverseGraph.getDegree(u) == 0)
                stack.push(u);
        }

        while (!stack.isEmpty()) {
            T current = stack.pop();
            topologicalOrdering.enqueue(current);

            for (T v : G.getAdjacent(current)) {
                reverseGraph.deleteEdge(v, current);

                if (reverseGraph.getDegree(v) == 0)
                    stack.push(v);
            }
        }
    }

    
    public Iterable<T> getTopologicalOrder() {
        return topologicalOrdering;
    }
}
