package GeekCoder;

import java.util.*;

public class TopologicalSort {

    private Map<Node, Set<Node>> adjList = new HashMap<>();

    private Stack<Node> topoSorted = new Stack<>();

    public TopologicalSort() {}

    void addNeighbor(Node from, Node to) {
        adjList.computeIfAbsent(from, s -> new HashSet<>()).add(to);
    }

    void topologicalSort() throws Exception {

        for (Node n: adjList.keySet()) {
            if (n.visited == 0) {
                dfs(n);
            }
        }
    }

    void dfs(Node node) throws Exception {

        if (node.visited == 1) {
            throw new Exception("graph cyclic");
        }

        if (node.visited == 0) {
            node.visited = 1;
            if (adjList.containsKey(node)) {
                for (Node m : adjList.get(node)) {
                    dfs(m);
                }
            }

            node.visited = 2;
            topoSorted.push(node);
        }
    }


    public class Node {
        String value;
        int visited = 0;

        Node (String value) {
            this.value = value;
        }
    }

}