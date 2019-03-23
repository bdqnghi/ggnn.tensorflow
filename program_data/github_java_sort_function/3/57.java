package com.dlh.zambas.graph;

import java.util.Iterator;
import java.util.Stack;

public class TopologicalSort {
	public void addEdge(Graph graph, int v, int w) {
		graph.adjListArray[v].add(w);
	}

	public void topologicalSort(Graph graph) {
		Stack<Integer> stack = new Stack<>();
		boolean visited[] = new boolean[graph.vertex];

		for (int i = 0; i < graph.vertex; i++) {
			if (!visited[i])
				topologicalSortUtil(graph, i, visited, stack);
		}

		
		while (stack.empty() == false)
			System.out.print(stack.pop() + " ");
	}

	private void topologicalSortUtil(Graph graph, int vertex, boolean[] visited, Stack<Integer> stack) {
		visited[vertex] = true;
		int i;
		Iterator<Integer> it = graph.adjListArray[vertex].listIterator();
		while (it.hasNext()) {
			i = it.next();
			if (!visited[i]) {
				topologicalSortUtil(graph, vertex, visited, stack);
			}
		}
		stack.push(vertex);
	}


}
