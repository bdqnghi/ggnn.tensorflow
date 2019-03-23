package algorithm_java;





import java.io.*;
import java.util.*;



class TopologicalSort {
	private int V; 
	private LinkedList<Integer> adj[]; 

	
	
	TopologicalSort(int v) {
		V = v;
		adj = new LinkedList[v];
		for (int i = 0; i < v; ++i)
			adj[i] = new LinkedList();
	}

	
	void addEdge(int v, int w) {
		adj[v].add(w);
	}

	
	void topologicalSortUtil(int v, boolean visited[], Stack stack) {
		
		visited[v] = true;
		Integer i;

		
		
		Iterator<Integer> it = adj[v].iterator();
		while (it.hasNext()) {
			i = it.next();
			if (!visited[i])
				topologicalSortUtil(i, visited, stack);
		}

		
		stack.push(new Integer(v));
	}

	
	
	void topologicalSort() {
		Stack stack = new Stack();

		
		boolean visited[] = new boolean[V];

		
		
		
		for (int i = 0; i < V; i++)
			if (visited[i] == false)
				topologicalSortUtil(i, visited, stack);

		
		while (stack.empty() == false)
			System.out.print(stack.pop() + " ");
	}


}