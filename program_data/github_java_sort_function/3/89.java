public int[] topologicalSort(Digraph digraph) {

        DirectedCycle directedCycle = new DirectedCycle(digraph);
        if (directedCycle.hasCycle()) {
            
            return null;
        }

        int[] indegree = new int[digraph.vertices()];
        Queue<Integer> sources = new Queue<>();

        ranks = new int[digraph.vertices()];

        int[] topologicalSort = new int[digraph.vertices()];
        int topologicalSortIndex = 0;

        for(int vertex = 0; vertex < digraph.vertices(); vertex++) {
            for(int neighbor : digraph.adjacent(vertex)) {
                indegree[neighbor]++;
            }
        }

        for(int vertex = 0; vertex < digraph.vertices(); vertex++) {
            if (indegree[vertex] == 0) {
                sources.enqueue(vertex);
            }
        }

        while (!sources.isEmpty()) {
            int currentSource = sources.dequeue();

            ranks[currentSource] = topologicalSortIndex;
            topologicalSort[topologicalSortIndex++] = currentSource;

            for(int neighbor : digraph.adjacent(currentSource)) {
                indegree[neighbor]--;

                if (indegree[neighbor] == 0) {
                    sources.enqueue(neighbor);
                }
            }
        }

        return topologicalSort;
    }

    