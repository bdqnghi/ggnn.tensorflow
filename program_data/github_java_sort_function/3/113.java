

class Graph{
	private int V;
	private LinkedList<Integer> adjacencyList[];
	
	public Graph(int size){
		this.V = size;
		adjacencyList = new LinkedList[V];
		for (int i = 0; i < V; i++)
			adjacencyList[i] = new LinkedList();
			
	}
	
	public void addEdge(int v, int w){
		adjacencyList[v].add(w);
	}
	
	public Deque<Integer> topologicalSort(){
		return topologicalSort(this);
	}
	
	public Deque<Integer> topologicalSort(Graph graph){
		Deque<Integer> stack = new LinkedList<>();
		Set<Integer> visited = new HashSet<>();
		for (int vertex = 0; vertex < V; vertex++){
			
			if (adjacencyList[vertex].size() < 1)
				continue;
			if (visited.contains(vertex))
				continue;
			
			topologicalSortHelper(vertex, stack, visited);
		}
		return stack;
	}
	
	public void topologicalSortHelper(Integer vertex, Deque<Integer> stack, Set<Integer> visited){
		visited.add(vertex);
		
		for (Integer neighbor: adjacencyList[vertex]){
			if (visited.contains(neighbor))
				continue;
			topologicalSortHelper(neighbor, stack, visited);
		}
		stack.push(vertex);
	}
}

