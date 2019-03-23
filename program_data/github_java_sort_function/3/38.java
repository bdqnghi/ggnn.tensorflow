package utility.heakerEarth;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

import javax.management.RuntimeErrorException;

import com.sun.corba.se.impl.orbutil.graph.Graph;

class AdjGraph<E> {
	public ArrayList<ArrayList<Integer>> adjList = null;
	private int numberOfNodes = 0;

	public AdjGraph(int numberOfNode) {
		this.numberOfNodes = numberOfNode;
		adjList = new ArrayList<>(numberOfNode);
		for (int i = 0; i <= numberOfNode; ++i) {
			adjList.add(new ArrayList<Integer>(10));
		}
	}

	public void addEdge(int x, int y) {
		adjList.get(x).add(y);
	}

	public int getSize() {
		return this.numberOfNodes;
	}
}

public class Topologicalsort {

	

	private int time = 0;
	boolean visit[];
	int starttime[], endtime[];
	AdjGraph<Integer> graph;

	public void traverse(int nodeid) {
		if (visit[nodeid]) return;
		visit[nodeid] = true;
		starttime[nodeid] = time++;
		for (int child : graph.adjList.get(nodeid)) {
			traverse(child);
		}
		endtime[nodeid] = time++;
	}

	

	public boolean isInSubtree(int nodex, int nodey) {
		if (starttime[nodey] > starttime[nodex]
				&& endtime[nodey] < endtime[nodex]) return true;
		return false;
	}

	public void solver(int n) {
		graph = createGraph();
		int size = graph.getSize() + 1;
		visit = new boolean[size];
		starttime = new int[size];
		endtime = new int[size];

		for (int i = 1; i <= size; ++i) {
			if (!visit[i]) traverse(i);
		}
	}

	public AdjGraph<Integer> createGraph() {
		int numberOfNodes = nextInt();
		AdjGraph<Integer> graph = new AdjGraph<>(numberOfNodes);
		while (numberOfNodes-- > 0) {
			int x = nextInt(), y = nextInt();
			graph.addEdge(x, y);
		}
		return graph;
	}

	

	private static final BufferedReader br = new BufferedReader(
			new InputStreamReader(System.in));
	private static StringTokenizer stkn = null;

	private static final String next() {
		String line = "";

		while (stkn == null || !stkn.hasMoreTokens() && line != null) {
			try {
				line = br.readLine();
			} catch (IOException e) {
				throw new RuntimeException(e);
			}
			if (line != null) {
				stkn = new StringTokenizer(line);
			}
		}
		return stkn.hasMoreElements() ? stkn.nextToken() : null;
	}

	private static long nextLong() {
		return Long.parseLong(next());
	}

	private static int nextInt() {
		return Integer.parseInt(next());
	}

}
