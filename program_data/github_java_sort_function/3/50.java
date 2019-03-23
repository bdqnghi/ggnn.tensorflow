package com.sm.playground.graph;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Deque;
import java.util.List;


public class TopologicalSort {
  private int count;
  private List<Integer>[] adjList;
  private boolean[] visited;
  private Deque<Integer> stack = new ArrayDeque();

  public TopologicalSort(int count) {
    this.count = count;
    adjList = new ArrayList[count];
    visited = new boolean[count];
    for(int i = 0; i < count; i++) {
      adjList[i] = new ArrayList<>();
    }
  }

  public void addEdge(int first, int second) {
    checkGpaphIndex(first);
    checkGpaphIndex(second);
    adjList[first].add(second);
  }

  private void checkGpaphIndex(int vertex) {
    if (vertex < 0 || vertex >= count) {
      throw new IllegalArgumentException("Wrong graph vertex index: " + vertex);
    }
  }

  private void dfs(int vertex) {
    if (visited[vertex]) {
      return;
    }
    visited[vertex] = true;
    for(int i: adjList[vertex]) {
      if (!visited[i]) {
        dfs(i);
      }
    }
    stack.push(vertex);
  }

  public Collection<Integer> sort() {
    for(int i = 0; i < count; i++) {
      dfs(i);
    }
    return stack;
  }


}
