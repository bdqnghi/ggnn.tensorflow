package com.pranav.geeksforgeeks;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Set;
import java.util.Stack;

public class Topological {
	public static int[] topoSort(ArrayList<Integer> graph[], int N) {
		Stack<Integer> stack = new Stack<>();
		Set<Integer> visited = new HashSet<>();
		for (int i = 0; i < N; i++) {
			if (!visited.contains(i)) {
				topoSortUtil(i, graph, stack, visited);
			}
		}
		int[] result = new int[N];
		int k=0;
		while(!stack.isEmpty()) {
			result[k] = stack.pop();
			k++;
		}
		return result;
	}

	private static void topoSortUtil(int i, ArrayList<Integer>[] graph, Stack<Integer> stack, Set<Integer> visited) {
		if (!visited.contains(i)) {
			visited.add(i);
			for(int adjElement : graph[i]) {
				topoSortUtil(adjElement, graph, stack, visited);
			}
			stack.push(i);
		}
	}
}
