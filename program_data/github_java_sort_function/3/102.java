package com.company;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Stack;


public class TopologicalSort {
    int V;
    LinkedList<Integer>[] adj;

    TopologicalSort(int V){
        this.V=V;
        adj=new LinkedList[V];
        for(int i=0;i<V;i++){
            adj[i]=new LinkedList<>();
        }
    }


    void addEdge(int v,int w){
        adj[v].add(w);
    }

    void tsort(){
        boolean[] visited=new boolean[V];
        for(int i=0;i<V;i++){
            visited[i]=false;
        }

        Stack<Integer> stack=new Stack();
        for(int i=0;i<V;i++){
            if(!visited[i]){
                tsortUtil(visited,i,stack);
            }
        }
        while(!stack.isEmpty()){
            System.out.println(stack.pop());
        }


    }

    void tsortUtil(boolean[] visited,int start,Stack<Integer> stack){

        visited[start]=true;
        Integer next;
        Iterator<Integer> iterator=adj[start].iterator();
        while(iterator.hasNext()){
            next=iterator.next();
            if(!visited[next]){
                tsortUtil(visited,next,stack);
            }
        }

        stack.push(start);
    }
}
