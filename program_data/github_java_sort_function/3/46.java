package topologicalSort;

import app.AppView;
import graph.AdjacencyGraph;
import graph.Edge;
import list.ArrayList;
import list.Iterator;
import list.LinkedStack;
import list.List;
import list.Stack;

public class TopologicalSort<E extends Edge> {

	private static final boolean DEBUG_MODE = true;
	
	private static void showDebugMessage(String aMessage){
		if (DEBUG_MODE){
			AppView.outputDebugMessage(aMessage);
		}
	}
	
	
	private AdjacencyGraph<E> _graph;
	private int[]			  _predecessorCounts;
	private Stack<Integer>    _zeroCountVertices;
	private List<Integer>     _sortedList;
	
	public TopologicalSort() {
		this.setGraph(null);
		this.setPredecessorCounts(null);
		this.setZeroCountVertices(null);
		this.setSortedList(null);
	}
	
	private AdjacencyGraph<E> graph() {
		return this._graph;
	}
	private void setGraph(AdjacencyGraph<E> newGraph){
		this._graph = newGraph;
	}
	private int[] predecessorCounts(){
		return this._predecessorCounts;
	}
	private void setPredecessorCounts(int[] newPredecessorCount) {
		this._predecessorCounts = newPredecessorCount;
	}
	private Stack<Integer> zeroCountVertices(){
		return this._zeroCountVertices;
	}
	private void setZeroCountVertices(Stack<Integer> newZeroCountVertices){
		this._zeroCountVertices = newZeroCountVertices;
	}
	
	private List<Integer> sortedList() {
		return this._sortedList;
	}
	private void setSortedList(List<Integer> newSortedList){
		this._sortedList = newSortedList;
	}
	public List<Integer> topologicallySortedList() {
		return this.sortedList();
	}
	
	private void initPredecessorCounts() {
		this.setPredecessorCounts(new int[this.graph().numberOfVertices()]);
		for (int tailVertex = 0; tailVertex < this.graph().numberOfVertices(); tailVertex++){
			this.predecessorCounts()[tailVertex ] = 0;
		}
		for (int tailVertex = 0; tailVertex < this.graph().numberOfVertices(); tailVertex++){
			Iterator<E> iterator = this.graph().neighborIteratorOf(tailVertex);
			while(iterator.hasNext()){
				Edge edge = (Edge) iterator.next();
				this.predecessorCounts()[edge.headVertex()]++;
			}
		}
		TopologicalSort.showDebugMessage("\n[Debug] �� vertex�� �ʱ� ������ ���� ������ �����ϴ�:\n-->");
		for (int vertex = 0; vertex < this.graph().numberOfVertices(); vertex++){
			TopologicalSort.showDebugMessage(" ["+vertex+"] "+this.predecessorCounts()[vertex]);
		}
		TopologicalSort.showDebugMessage("\n");
	}
	
	private void initZeroCountVertices() {
		this.setZeroCountVertices(new LinkedStack<Integer>());
		TopologicalSort.showDebugMessage(
				"\n[Debug] �׷����� �����ڰ� ���� vertex���� ������ �����ϴ�:\n --> (");
		for (int vertex = 0; vertex < this.graph().numberOfVertices(); vertex++){
			if(this.predecessorCounts()[vertex] == 0){
				this.zeroCountVertices().push(vertex);
				TopologicalSort.showDebugMessage(vertex + " ");
			}
		}
		TopologicalSort.showDebugMessage(")\n");
	}
	
	private void showZeroCountVertices() {
		TopologicalSort.showDebugMessage("--> ����: <Top>");
		Iterator<Integer> iterator = this.zeroCountVertices().iterator();
		
		while(iterator.hasNext()){
			int vertex = (Integer) iterator.next();
			TopologicalSort.showDebugMessage(" " + vertex);
		}
		TopologicalSort.showDebugMessage(" <Bottom>\n");
	}
	
	
	public boolean solve(AdjacencyGraph<E> aGraph) {
		this.setGraph(aGraph);
		this.initPredecessorCounts();
		this.initZeroCountVertices();
		this.setSortedList(new ArrayList<Integer>(this.graph().numberOfVertices()));
		
		TopologicalSort.showDebugMessage("\n[Debug] ���ÿ� pop/push �Ǵ� ������ ������ �����ϴ�:\n");
		this.showZeroCountVertices();
		while(! this.zeroCountVertices().isEmpty()){
			int tailVertex = this.zeroCountVertices().pop();
			TopologicalSort.showDebugMessage("--> Popped = " + tailVertex + ": Pushed = ( ");
			this.sortedList().add(tailVertex);
			Iterator<E> iterator = this.graph().neighborIteratorOf(tailVertex);
			while (iterator.hasNext()){
				Edge edge = (Edge) iterator.next();
				--this.predecessorCounts()[edge.headVertex()];
				if(this.predecessorCounts()[edge.headVertex()] == 0){
					this.zeroCountVertices().push(edge.headVertex());
					TopologicalSort.showDebugMessage(edge.headVertex()+" ");
				}
			}
			TopologicalSort.showDebugMessage(")\n");
			this.showZeroCountVertices();
		}
		return (this.sortedList().size() == this.graph().numberOfVertices());
	}	
}
