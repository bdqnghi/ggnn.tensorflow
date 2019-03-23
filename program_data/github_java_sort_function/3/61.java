import java.io.*;
import  java.util.*;
class Graph{
	private int V;
	private LinkedList<Integer> adj[];
	Graph(int v)
	{
		V =v;
		adj = new LinkedList[v];
		for (int i=0;i<v;i++)
		 adj[i] = new LinkedList();
	}
	void addEdge (int v ,int w)
	{
		adj[v].add(w);
		
	}
	void topologicalSortUtil(int v,boolean visited [],Stack stack)
	{
		visited[v] = true;
		Integer i;
		Iterator it = adj[v].ListIterator();
		while (it.hasNext())
		{
			i= it.next();
			if (!visited[i])
				topologicalSortUtil(i,visited,stack)
		}
		stack.push(new Integer(v));
	}
	
	void topologicalSort()
	{
		boolean visited []  = new boolean[V];
		  for (int i = 0; i < V; i++)
            visited[i] = false;
        Stack<Integer> stack = new Stack<>();
		for (int i = 0; i < V; i++)
            if (visited[i] == false)
                topologicalSortUtil(i, visited, stack);
         while (stack.empty()==false)
            System.out.print(stack.pop() + " ");
	}
}