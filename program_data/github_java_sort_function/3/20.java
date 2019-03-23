package Graph;

import java.util.Iterator;
import java.util.LinkedList;

import java.util.ArrayList;
import java.util.Stack;


public class TopologicalSort {
    private int vertex;
    private LinkedList<Integer> adj[];

    public TopologicalSort(int v) {
        vertex = v;
        adj = new LinkedList[v];
        for (int i = 0; i < v; i++) {
            adj[i] = new LinkedList<>();
        }
    }
    void addEdge(int v, int e) {
        adj[v].add(e);
    }

   

    public  void topologicalSort() {
        Stack stack=new Stack();
        boolean visited[]=new boolean[vertex];
        for(int i=0;i<vertex;i++) {
            visited[i]=false;
        }
        for(int j=0;j<vertex;j++) {
            if(visited[j]==false) {
                topologicalSortUtil(visited,stack,j);
            }
        }
        while(stack.empty()==false) {
            System.out.println(stack.pop() + " ");
        }
    }

    public void topologicalSortUtil(boolean[] visited, Stack stack,int vertexData) {
        
            visited[vertexData] = true;
            
           
            Iterator<Integer> iterator = adj[vertexData].iterator();
            while (iterator.hasNext()) {
                
                int nextData = iterator.next();
                
                if (!visited[nextData]) {
                    topologicalSortUtil(visited, stack, nextData);
                }
                

            }
            stack.push(vertexData);
        
    }

}
