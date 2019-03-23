

import java.util.*;
public class TopologicalSort{
	

	  private int V;
	  List<Integer>[] adj;


	  public TopologicalSort(int v){

	  	  V =v;

	  	  adj = new LinkedList[V];

	  	  for(int i = 0;i<V;i++){

	  	  	adj[i] = new LinkedList<>();
	  	  }
	  }

	  public void addEdge(int u,int v){

	  	 adj[u].add(v);
	  }

	  public void topologicalsort(){

	  	 boolean[] visited = new boolean[V];
	  	 Stack<Integer> stack = new Stack<>();

	  	 for(int i = 0;i<V;i++){

	  	 	if(!visited[i]){

	  	 		topologicalsortUtil(i,visited,stack);
	  	 	}
	  	 }

	  	 while(!stack.isEmpty()){

	  	 	System.out.println(stack.pop()+" ");
	  	 }
	  }

	  private void topologicalsortUtil(int v,boolean[] visited,Stack<Integer> stack){

	  	  visited[v] = true;

	  	  Iterator<Integer> itr = adj[v].listIterator();

	  	  while(itr.hasNext()){

             int neighbour = itr.next();
	  	  	 if(!visited[neighbour]){

                 topologicalsortUtil(neighbour,visited,stack);
	  	  	 }
	  	  } 

	  	  stack.push(v);
	  }


}