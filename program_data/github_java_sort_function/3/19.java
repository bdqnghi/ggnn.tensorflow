
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Graph {

	int V;

	public char color[];
	public LinkedList<Integer> AdjList[];
	public int discover[];
	public int finish[];
	public int Pi[];
	public LinkedList<Integer> Topological; 
	int t = 0;

	public Graph(int n) {
		this.V = n;
		AdjList = new LinkedList[n];
		Topological = new LinkedList<Integer>();
		color = new char[n];
		discover = new int[n];
		finish = new int[n];
		Pi = new int[n];

		for (int i = 0; i < n; i++) {
			AdjList[i] = new LinkedList<>();
		}
		Pi[0] = 0;
	}
}

public class Topologicalsort {


	private static void BFSTraversal(Graph v, Integer u, char[] color) {

		v.discover[u] = v.t++;
		v.color[u] = 'Y';

		if (!v.AdjList[u].isEmpty()) {
			for (Integer i : v.AdjList[u]) {
				if (v.color[i] == 'R') {
					v.Pi[i] = u;
					v.color[i] = 'Y';
					BFSTraversal(v, i, v.color);
				}
			}
		}

		v.color[u] = 'B';
		v.finish[u] = v.t++;
		
		v.Topological.addFirst(u);
		
	}

	public static void addnode(Graph v, int start, int end) {
		v.AdjList[start].add(end);

		if (v.color[start] != 'R')
			v.color[start] = 'R';

		

		if (v.color[end] != 'R')
			v.color[end] = 'R';

	}

	static void printGraph(Graph vertex) {
		for (int v = 0; v < vertex.V; v++) {
			System.out.println("Adjacency list of vertex " + v);
			System.out.print("head");
			System.out.print(vertex.color[v]);
			for (Integer pCrawl : vertex.AdjList[v]) {
				System.out.print(" -> " + pCrawl);
			}
			System.out.println("\n");
		}
	}
}
