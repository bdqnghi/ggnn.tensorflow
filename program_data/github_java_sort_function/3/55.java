public <V> List<V> sortRecursive(Digraph<V> digraph) {
        List<V> topologicalOrder = new ArrayList<>();
        VertexInDegreeCounter vertexInDegreeCounter = new VertexInDegreeCounter(digraph);
        Set<V> zeroInDegreeVertices = getZeroInDegreeVertices(digraph);
        if (zeroInDegreeVertices.isEmpty()) throw new RuntimeException("Graph has loop.");
        zeroInDegreeVertices.stream().forEach(vertex -> sortRecursive(topologicalOrder, vertex, digraph, vertexInDegreeCounter));
        return topologicalOrder;
    }

    private <V> void sortRecursive(List<V> topologicalOrder, V vertex, Digraph<V> digraph, VertexInDegreeCounter vertexInDegreeCounter) {
        topologicalOrder.add(vertex);
        for (V outgoingVertex : digraph.getOutboundNeighbors(vertex)) {
            vertexInDegreeCounter.decreaseInDegreeCountByOne(outgoingVertex);
            if (!vertexInDegreeCounter.hasMoreInDegree(outgoingVertex))
                sortRecursive(topologicalOrder, outgoingVertex, digraph, vertexInDegreeCounter);
        }
    }

    public <V> List<V> sortNonRecursive(Digraph<V> digraph) {
        List<V> topologicalOrder = new ArrayList<>();
        Stack<V> stack = new LinkedStack<>();

        getZeroInDegreeVertices(digraph).forEach(stack::push);
        VertexInDegreeCounter vertexInDegreeCounter = new VertexInDegreeCounter(digraph);

        if (stack.isEmpty())
            throw new RuntimeException("Graph has loop.");

        while (!stack.isEmpty()) {
            V vertex = stack.pop();
            topologicalOrder.add(vertex);
            for (V outgoingVertex : digraph.getOutboundNeighbors(vertex)) {
                vertexInDegreeCounter.decreaseInDegreeCountByOne(outgoingVertex);
                if (!vertexInDegreeCounter.hasMoreInDegree(outgoingVertex))
                    stack.push(outgoingVertex);

            }
        }

        return topologicalOrder;
    }

    