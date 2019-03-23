package retiming;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map.Entry;

import scheduler.Graph;
import scheduler.Node;


public abstract class Retimer {
  protected final Graph graph;
  private final ArrayList<Node> topologicalSort;
  private static class TopologicalComparator implements Comparator<Node> {
    @Override
    public int compare(Node o1, Node o2) { return o1.getDepth() - o2.getDepth(); }
  }
  private final TopologicalComparator topologicalComp = new TopologicalComparator();
  
  public Retimer (Graph graph) {
    this.graph = graph;
    this.topologicalSort = new ArrayList<Node>(graph.size());
    Iterator<Node> it = graph.iterator();
    while (it.hasNext()) topologicalSort.add(it.next());
  }
  
  
  protected int longestPath () {
    topologicalSort.sort(topologicalComp);
    
    if (graph.tmp1Used) throw new IllegalArgumentException("An other function is using tmp1 in this graph!");
    else graph.tmp1Used = true;
    for (int i = 0; i < topologicalSort.size(); i++) topologicalSort.get(i).tmp1 = 0;
    
    for (int i = 0; i < topologicalSort.size(); i++) {
      int nextStartTime = topologicalSort.get(i).tmp1 + topologicalSort.get(i).getDelay();
      HashMap<Node, Integer> succ = topologicalSort.get(i).allSuccessors();
      Iterator<Entry<Node, Integer>> it = succ.entrySet().iterator();
      while (it.hasNext()) {
        Entry<Node, Integer> e = it.next();
        if (e.getValue() != 0) continue; 
        if (nextStartTime > e.getKey().tmp1) e.getKey().tmp1 = nextStartTime;
      }
    }
    
    int longestPath = 0;
    for (int i = 0; i < topologicalSort.size(); i++) {
      topologicalSort.get(i).tmp1 += topologicalSort.get(i).getDelay();
      if (topologicalSort.get(i).tmp1 > longestPath) longestPath = topologicalSort.get(i).tmp1;
    }
    graph.tmp1Used = false;
    return longestPath;
  }
  
  
  public abstract int[] retime (int quality);
}
