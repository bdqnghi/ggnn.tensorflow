package com.kmcho.com.geeks.graph.toposort;

import java.util.*;


class GfG {
    public static int[] topoSort(ArrayList<Integer> graph[], int N) {
        boolean[] visited = new boolean[N];
        Stack<Integer> path;
        Stack<Integer> output = new Stack<>();;

        List<Integer> startList = findStart(graph, N);
        Iterator<Integer> iterator = startList.iterator();

        List<Integer> outputList = new ArrayList<>();

        while (iterator.hasNext()) {
            int start = iterator.next();

            path = new Stack<>();

            DFS(graph, start, visited, path, output);
        }

        while (!output.isEmpty()) {
            int popped = output.pop();
            outputList.add(popped);
        }

        return outputList.stream().mapToInt(i->i).toArray();
    }

    private static List<Integer> findStart(ArrayList<Integer>[] graph, int N) {
        boolean[] hasParent = new boolean[N];
        for (int i = 0; i < N; i++) {
            Iterator<Integer> iterator = graph[i].iterator();
            while (iterator.hasNext()) {
                int n = iterator.next();
                hasParent[n] = true;
            }
        }

        List<Integer> startList = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            if (!hasParent[i]) startList.add(i);
        }
        return startList;
    }

    private static void DFS(ArrayList<Integer> graph[], int start, boolean[] visited, Stack<Integer> path, Stack<Integer> output) {
        if (visited[start]) {
            return;
        }
        visited[start] = true;
        path.push(start);

        Iterator<Integer> iterator = graph[start].iterator();

        while (iterator.hasNext()) {
            int next = iterator.next();

            DFS(graph, next, visited, path, output);

            while (path.peek() != start) {
                output.push(path.pop());
            }
        }
        output.push(path.pop());
    }


}
