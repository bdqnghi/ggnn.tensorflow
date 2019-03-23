import java.util.*;



public class TopologicalSort {
  private List<Node> res;
  private Queue<Node> zeroInDegree;
  private Graph graph;
  
  public boolean TopologicalSortBFS(Graph di) {
    this.graph = di;
    res = new ArrayList<>();
    zeroInDegree = new LinkedList<>();
    
    for (Node curr : graph.nodes) {
      if (curr.pathIn == 0) {
        zeroInDegree.offer(curr);
      }
    }
    while (!zeroInDegree.isEmpty()) {
      Node curr = zeroInDegree.poll();
      
      res.add(curr);
      for (Node to : graph.adj.get(curr)) {
        
        to.pathIn--;
        
        if (to.pathIn == 0) {
          zeroInDegree.offer(to);
        }
      }
      
      graph.nodes.remove(curr);
      graph.adj.remove(curr);
    }
    
    if (!graph.nodes.isEmpty()) {
      return false;
    }
    return true;
  }
  
  public boolean TopologicalSortDFS(Graph di) {
    Stack<Node> stack = new Stack<>();
    Set<Node> isLoop = new HashSet<>();
    Set<Node> visited = new HashSet<>();
    res = new ArrayList<>();
    for (Node curr : di.nodes) {
      if (!dfs(di, curr, isLoop, visited, stack)) return false;
    }
    while (!stack.isEmpty()) {
      res.add(stack.pop());
    }
  
    return true;
  }
  
  
  private boolean dfs(Graph di, Node curr, Set<Node> isLoop,
                      Set<Node> visited, Stack<Node> stack) {
    if (visited.contains(curr)) return true;
    if (isLoop.contains(curr)) return false;
    isLoop.add(curr);  
    for (Node neibor : di.adj.get(curr)) {
      if (!dfs(di, neibor, isLoop, visited, stack)) return false;
    }
    visited.add(curr); 
    stack.push(curr);  
    return true;
  }
  
  public Iterable<Node> getRes() {
    return res;
  }
}
