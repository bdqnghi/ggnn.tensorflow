package de.adrianlange.graph.sort;

import de.adrianlange.graph.DirectedEdge;
import de.adrianlange.graph.DirectedGraph;
import de.adrianlange.graph.DirectedVertex;
import de.adrianlange.graph.annotation.AbstrEdgeAnnotation;
import de.adrianlange.graph.annotation.AbstrVertexAnnotation;
import de.adrianlange.graph.search.DepthFirstSearch;
import de.adrianlange.graph.search.SearchException;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Set;


public class TopologicalSort<T extends AbstrVertexAnnotation<T>, W extends AbstrEdgeAnnotation<W>> extends DepthFirstSearch<T, W, DirectedVertex<T, W>, DirectedEdge<T, W>, DirectedGraph<T, W>, Boolean, Object, List<DirectedVertex<T, W>>> implements ISort<T, W, DirectedVertex<T, W>, DirectedEdge<T, W>, DirectedGraph<T, W>> {

	private Set<DirectedVertex<T, W>> temporaryMarking;

	public List<DirectedVertex<T, W>> execute(DirectedGraph<T, W> g) throws SearchException {
		super.execute(g, null, null);
		temporaryMarking = new HashSet<>();
		result = new LinkedList<>();
		for (DirectedVertex<T, W> vertex : g.getVertices().values()) {
			if (!isMarked(vertex)) {
				dfsVisit(vertex);
			}
		}
		return result;
	}

	@Override
	protected void startVisit(DirectedVertex<T, W> vertex) throws SearchException {
		super.startVisit(vertex);
		if (temporaryMarking.contains(vertex)) {
			throw new SearchException("Graph is not acyclic.");
		}
		temporaryMarking.add(vertex);
	}

	@Override
	protected void finishVisit(DirectedVertex<T, W> vertex) throws SearchException {
		super.finishVisit(vertex);
		temporaryMarking.remove(vertex);
		result.add(0, vertex);
	}

	@Override
	public List<DirectedVertex<T, W>> sort(DirectedGraph<T, W> g) throws SortException {
		try {
			return execute(g);
		} catch (SearchException ex) {
			throw new SortException(ex);
		}
	}

	@Override
	public List<DirectedVertex<T, W>> sortDesc(DirectedGraph<T, W> g) throws SortException {
		try {
			final List<DirectedVertex<T, W>> list = sort(g);
			final List<DirectedVertex<T, W>> reversedList = new LinkedList<>();
			for (DirectedVertex<T, W> vertex : list) {
				reversedList.add(0, vertex);
			}
			return reversedList;
		} catch (SortException ex) {
			throw new SortException(ex);
		}
	}
}
