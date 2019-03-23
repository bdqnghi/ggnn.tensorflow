
package Graphs;

import java.util.*;

public class TopologicalSort {

	
	
	static void dfs(List<Integer>[] g, boolean[] used, List<Integer> res, int u) {
		used[u] = true;
		for (int v : g[u]) {
			if (!used[v]) {
				dfs(g, used, res, v);
			}
		}
		res.add(u);
	}

	static List<Integer> topSort(List<Integer>[] g) {
		int n = g.length;
		boolean[] used = new boolean[n];
		List<Integer> res = new ArrayList<>();
		for (int i = 0; i < n; i++)
			if (!used[i])
				dfs(g, used, res, i);
		Collections.reverse(res);
		return res;
	}

}