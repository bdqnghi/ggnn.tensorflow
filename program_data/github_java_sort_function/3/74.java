package search.search;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Stack;

public class Topological {
	
	private int vertices;
    private LinkedList<Integer> adj[];
	
	Topological(Graph g) {
		vertices = g.getVertices();
		adj = g.getAdjacencyList();
	}

    
    void topologicalSortUtil(int v, boolean visited[],
                             Stack<Integer> stack)
    {
        
        visited[v] = true;
        Integer i;
 
        
        
        Iterator<Integer> it = adj[v].iterator();
        while (it.hasNext())
        {
            i = it.next();
            if (!visited[i])
                topologicalSortUtil(i, visited, stack);
        }
 
        
        stack.push(new Integer(v));
    }
 
    
    
    public void topologicalSort()
    {
        Stack<Integer> stack = new Stack<Integer>();
 
        
        boolean visited[] = new boolean[vertices];
        for (int i = 0; i < vertices; i++)
            visited[i] = false;
 
        
        
        
        for (int i = 0; i < vertices; i++)
            if (visited[i] == false)
                topologicalSortUtil(i, visited, stack);
 
        
        while (stack.empty()==false)
            System.out.print(stack.pop() + " ");
    }
}
