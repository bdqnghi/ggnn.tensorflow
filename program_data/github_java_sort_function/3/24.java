
    public static List<Integer> topologicalSortRecursive(Graph graph) {
        
        Map<Integer, Integer> vertexInDegreeMap = getVertexInDegreeMap(graph);

        
        Set<Integer> zeroInDegreeVertices = getZeroIndegreeVertices(vertexInDegreeMap);

        if (zeroInDegreeVertices.isEmpty()) {
            throw new RuntimeException("Not possible, not found any zero indegree vertices in graph.");
        }

        List<Integer> topologicalOrder = new ArrayList<>(graph.numberOfVertices);
        boolean[] visited = new boolean[graph.numberOfVertices];

        for (Integer vertexWithZeroIndegree : zeroInDegreeVertices) {
            topologicalSortRecursive(graph, vertexWithZeroIndegree, visited, topologicalOrder, vertexInDegreeMap);
        }

        return topologicalOrder;

    }

    private static void topologicalSortRecursive(Graph graph, Integer currentVertex, boolean[] visited,
                                                 List<Integer> topologicalOrder, Map<Integer, Integer> vertexInDegreeMap) {

        topologicalOrder.add(currentVertex);
        visited[currentVertex] = true;

        for (Integer adjacentVertex : graph.adjacencyLists[currentVertex]) {

            if (!visited[adjacentVertex]) {
                vertexInDegreeMap.put(adjacentVertex, vertexInDegreeMap.get(adjacentVertex) - 1);

                if (vertexInDegreeMap.get(adjacentVertex) == 0) {
                    topologicalSortRecursive(graph, adjacentVertex, visited, topologicalOrder, vertexInDegreeMap);
                }
            }
        }

    }

    