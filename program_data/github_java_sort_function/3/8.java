package com.sm.algorithms.graph;

import com.google.common.base.Preconditions;

import java.util.ArrayDeque;
import java.util.Collection;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;



public class TopologicalSort {
  private int count;
  private List<Integer>[] adjList;
  private boolean[] visited;
  private Deque<Integer> stack = new ArrayDeque<>();

  public TopologicalSort(int count) {
    this.count = count;
    adjList = new LinkedList[count];
    visited = new boolean[count];
    for(int i = 0; i < count; i++) {
      adjList[i]  = new LinkedList<>();
    }
  }

  public void dfs() {
    for(int i = 0; i < count; i++) {
      if (!visited[i]) {
        dfs(i);
      }
    }
  }

  public  void addEdge(int src, int dest) {
    Preconditions.checkArgument(src < count);
    Preconditions.checkArgument(dest < count);
    adjList[src].add(dest);
  }

  public Collection<Integer> getSequence() {
    return stack;
  }

  private void dfs(int src) {
    visited[src] = true;
    for(int adj: adjList[src]) {
      if (!visited[adj]) {
        dfs(adj);
      }
    }
    stack.push(src);
  }

 
}
