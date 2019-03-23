

public class Solution {
        
    public ArrayList<DirectedGraphNode> topSort(ArrayList<DirectedGraphNode> graph) {
        ArrayList<DirectedGraphNode> order = new ArrayList<DirectedGraphNode>();
        if(graph == null) {
            return order;
        }
        
        Map<DirectedGraphNode, Integer> indegree = getIndegree(graph);
        
        
        ArrayList<DirectedGraphNode> startNodes = getStartNodes(indegree, graph);
        
        order = bfs(indegree, startNodes);
		
		
		
		
		
        if(order.size() == graph.size()) {
            return order;
        }
        return null;
    }
    
    private Map<DirectedGraphNode, Integer> getIndegree(ArrayList<DirectedGraphNode> graph) {
        Map<DirectedGraphNode, Integer> indegree = new HashMap<DirectedGraphNode, Integer>();
		
        for(DirectedGraphNode node : graph) {
            indegree.put(node, 0);
        }
        for(DirectedGraphNode node : graph) {
            for(DirectedGraphNode neighbor : node.neighbors) {
                
                indegree.put(neighbor, indegree.get(neighbor) + 1);
            }
        }
        return indegree;
    }
    
    private ArrayList<DirectedGraphNode> getStartNodes(Map<DirectedGraphNode, Integer> indegree, ArrayList<DirectedGraphNode> graph) {
        ArrayList<DirectedGraphNode> nodes = new ArrayList<DirectedGraphNode>();
        for(DirectedGraphNode node : graph) {
            
            if(indegree.get(node) == 0) {
                nodes.add(node);
            }
        }
        return nodes;
    }
    
    private ArrayList<DirectedGraphNode> bfs(Map<DirectedGraphNode, Integer> indegree, ArrayList<DirectedGraphNode> startNodes) {
        ArrayList<DirectedGraphNode> order = new ArrayList<DirectedGraphNode>();
        Queue<DirectedGraphNode> queue = new LinkedList<DirectedGraphNode>();
        for(DirectedGraphNode startNode : startNodes) {
            order.add(startNode);
            queue.offer(startNode);
        }
	
	
	
	
        while(!queue.isEmpty()) {  
            DirectedGraphNode startNode = queue.poll();
            for(DirectedGraphNode neighbor : startNode.neighbors) {  
                
                
                
                
                indegree.put(neighbor, indegree.get(neighbor) - 1);
                if(indegree.get(neighbor) == 0) {
                    queue.offer(neighbor);
                    order.add(neighbor);
                }
            }
        }
        return order;
    }
    
}
