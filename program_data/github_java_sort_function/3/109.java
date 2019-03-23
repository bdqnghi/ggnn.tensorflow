package MiscQuestions;

import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Set;

import Common.GraphNode;


public class ToplogicalSort {
	
	public static List<Integer> topologicalSort(Set<GraphNode<Integer>> graph) {
		Set<GraphNode<Integer>> visited = new HashSet<>();
		LinkedList<Integer> ret = new LinkedList<Integer>();
		for (GraphNode<Integer> n : graph) {
			if (!visited.contains(n)) {
				DFS(n, visited, ret);
			}
		}
		return ret;
	}
	
	private static void DFS(GraphNode<Integer> node, Set<GraphNode<Integer>> visited, LinkedList<Integer> ret) {
		if (node == null) {
			return;
		}
		
		visited.add(node);
		Set<GraphNode<Integer>> nbs = node.getChildren();
		Iterator<GraphNode<Integer>> iter = nbs.iterator();
		while (iter.hasNext()) {
			GraphNode<Integer> n = iter.next();
			if (!visited.contains(n)) {
				DFS(n, visited, ret);
			}
		}
		ret.addFirst(node.getValue());
	}
}
