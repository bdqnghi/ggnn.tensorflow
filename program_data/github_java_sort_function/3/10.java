package Graph;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Stack;


public class TopologicalSort {

    int V;
    LinkedList<Integer> adj[];

    TopologicalSort(int V){
        this.V = V;
        adj = new LinkedList[V];
        for(int i=0; i<V; i++)
            adj[i] = new LinkedList();
    }

    public void addEdges(int v, int w){
        adj[v].add(w);
    }

    public void topologicalSort(){
        Stack stack = new Stack();

        boolean visited[] = new boolean[V]; 

        for(int i=0; i<V; i++){
            if(!visited[i])
                topologicalSort(i,stack, visited);
        }

        while (!stack.isEmpty())
            System.out.print(stack.pop() + "  ");

        System.out.println();
    }

    public void topologicalSort(int v, Stack stack, boolean visited[]){
        visited[v] = true;

        Iterator<Integer> it = adj[v].iterator();
        while (it.hasNext()){
            Integer i = it.next();
            if(!visited[i])
                topologicalSort(i,stack,visited);
        }

        stack.push(new Integer(v));
    }

}
