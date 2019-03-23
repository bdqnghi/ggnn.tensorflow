package topologicalsort;
import java.util.*;



class Graph {
	String[] vertices;
	int[][] adjacency;
	int numVertices;

	public Graph(String s, int[][] edges) {
		vertices = s.split(",");
		numVertices = vertices.length;
		adjacency = new int[numVertices][numVertices];

		for (int[] edge : edges)
			adjacency[edge[0]][edge[1]] = 1;
	}

	List<String> topoSort() {
		List<String> result = new ArrayList<>();
		List<Integer> todo = new LinkedList<>();

		for (int i = 0; i < numVertices; i++)
			todo.add(i);

		try {
			outer:
			while (!todo.isEmpty()) {
				for (Integer r : todo) {
					if (!hasDependency(r, todo)) {
						todo.remove(r);
						result.add(vertices[r]);
						 
						continue outer;
					}
				}
				throw new Exception("Graph has cycles");
			}
		} catch (Exception e) {
			System.out.println(e);
			return null;
		}
		return result;
	}

	boolean hasDependency(Integer r, List<Integer> todo) {
		for (Integer c : todo) {
			if (adjacency[r][c] > 0)
				return true;
		}
		return false;
	}
}