package geek.topinterview;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Stack;


public class TopologicalSort {
    public static class Node {
        
        List<Node> children;
        
        int val;
        int id;
        
        boolean visited;

        
        public Node(int id, int val) {
            
            this.val= val;
            children = new LinkedList<>();
            this.id = id;
            visited = false;
        }
        public String toString() {
            return "node id"+id+": value ="+val;
        }
    }
    public static class Graph {
        
        
        Node[] graph;
        
        public Graph(int size) {
            graph = new Node[size];
        }
        public void clearVisited() {
            Arrays.stream(graph).forEach((nd)-> {
                if(nd!=null) {
                    nd.visited=false;
                }
            });
        }
        
        public void addNode(int id, int val) {
            
            
            
            Node nd = new Node(id, val);
            
            graph[id] = nd;
        }

        
        public void addEdge(int fromNode, int toNode) {
            
            if((graph[fromNode]==null)||(graph[toNode]==null)) {
                throw new RuntimeException("Node does not exist");
            }
            graph[fromNode].children.add(graph[toNode]);
        }

        public void printTopologicalOrder() {
            Stack<Node> tOrder = getTopologicalOrder();
            tOrder.stream().forEach((nd)-> System.out.println("Visited node"+ nd));
        }

        
        public Stack<Node> getTopologicalOrder() {
            Stack<Node> tOrder = new Stack<Node>();
            for(Node nd:graph) {
                visitTopological(nd, tOrder);
            }
            return tOrder;
        }
        private void visitTopological(Node nd, Stack<Node> tOrder) {
            if(!nd.visited) {
                List<Node> childr= nd.children;
                if((childr!=null)||(!childr.isEmpty())) {
                    for(Node chld: childr) {
                        visitTopological(chld, tOrder);
                    }
                }
                nd.visited=true;
                tOrder.add(nd);
            }
        }

    }
   

}
