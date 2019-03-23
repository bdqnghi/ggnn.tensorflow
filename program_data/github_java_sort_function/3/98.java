package basic;

import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Stack;

public class TopologicalSort {
	
	LinkedList<Integer>[] adjList;
	int edges, vertex1, vertex2, numberOfnodes;
	TopologicalSort(int v)
    {
		numberOfnodes = v;
		adjList = new LinkedList[v];
        for (int i=0; i<v; ++i)
        	adjList[i] = new LinkedList();
    }
	 void addEdge(int v,int w) 
	 { 
		 adjList[v].add(w); 
	}
		void printGraph()
		{
			for(int i=0;i<adjList.length;i++)
			{
				System.out.print((i)+"->");
				Iterator<Integer> itr=adjList[i].iterator();
				while(itr.hasNext())
				{
					System.out.print((itr.next())+"-");
				}
				System.out.println();
			}
		}
		void topologicalSort()
		{
			HashSet<Integer> visited=new HashSet<>();
			Stack<Integer> stack=new Stack<>();
			for(int i=0;i<numberOfnodes;i++)
			{
				if(!visited.contains(i))
				{
					topologicalSortUtil(i, visited, stack);
				}
			}
			while(!stack.isEmpty())
			{
				System.out.print(stack.peek()+" ");
				stack.pop();
			}
		}
		void topologicalSortUtil(int vertex, HashSet<Integer> visited, Stack<Integer> stack)
		{
			visited.add(vertex);
			Iterator<?> itr=adjList[vertex].iterator();
			while(itr.hasNext())
			{
				Integer i=(Integer) itr.next();
				if(!visited.contains(i))
				{
					topologicalSortUtil(i, visited, stack);
				}
			}
			stack.push(new Integer(vertex));
		}
	
}
