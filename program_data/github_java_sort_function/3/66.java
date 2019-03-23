

package nz.ac.waikato.jdsl.graph.algo;

import nz.ac.waikato.jdsl.core.api.Sequence;
import nz.ac.waikato.jdsl.core.ref.NodeSequence;
import nz.ac.waikato.jdsl.graph.api.*;




public abstract class AbstractTopologicalSort {


  
  protected InspectableGraph graph_;


  
  protected boolean is_cyclic_;
  


  
  public Object NUMBER_KEY_;
  
  
  
  protected Sequence queue_;



  
  public AbstractTopologicalSort(){
  }



  
  public void execute(InspectableGraph g) throws InvalidEdgeException{
    init(g);
    sort();
  }



  
  protected void init(InspectableGraph g) throws InvalidEdgeException{
    graph_ = g;
    NUMBER_KEY_ = new Object();
    queue_ = new NodeSequence();

    
    EdgeIterator ei = graph_.edges();
    while (ei.hasNext()){
      Edge e = ei.nextEdge();
      if (!graph_.isDirected(e)){
	throw new InvalidEdgeException("All edges must be directed");
      }
    }
  }


  
  protected abstract void sort();



  

  
  public int number(Vertex v) throws
    InvalidQueryException, InvalidVertexException {
    if (is_cyclic_){
      throw new InvalidQueryException("Can't get the numbering because the "
				       + "graph contains cycles");
    }
    return ((Integer)v.get(NUMBER_KEY_)).intValue();
  }





  
  public boolean isCyclic() throws InvalidQueryException{
    return is_cyclic_;
  }



  
  public void cleanup(){
    if (graph_ != null){
      VertexIterator vertices = graph_.vertices();
      while(vertices.hasNext()){
	Vertex currentVertex = vertices.nextVertex();
	
	
	if (currentVertex.has(NUMBER_KEY_)){
	  currentVertex.destroy(NUMBER_KEY_);
	}
      }
      
      graph_ = null;
    }
  }


}
