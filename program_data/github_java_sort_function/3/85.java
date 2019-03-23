import java.util.ArrayList;

import edu.bilgics.GraphADT.*;





public class TopDfs {
	int time;
	IGraph g;
	ArrayList<IVertex> l=new ArrayList<IVertex>();
	public TopDfs() {
		
	}
	
	
	public static ArrayList<IVertex> getAllAdjacentVertices(IGraph g, IVertex v) {
		
		ArrayList<IVertex> res = new ArrayList<IVertex>();
		
		IEdge edge = null;
		try {
			try {
				edge = g.getFirstEdge();
			} catch (EmptyVerticeSetException e) {
				
				e.printStackTrace();
			}
			while (edge != null) {
				
				if (edge.getOriginatingVertex().equals(v)) {
					
					res.add(edge.getDestinationVertex());
				}
				
				try {
					edge = g.getNextEdge();
				} catch (EmptyVerticeSetException e) {
					
					e.printStackTrace();
				}
			}
		} catch (EmptyGraphException e) {
			
			e.printStackTrace();
		}

		return res;
	}
	
	
	public void dfsVisit(IVertex u){
		u.setColour("Gray");
		time=time+1;
		u.setDi(time);
		for(IVertex v : getAllAdjacentVertices(g, u)){
			if(v.getColour()=="White"){
				v.setPi(u);
				dfsVisit(v);
			}
		}
		u.setColour("Black");
		l.add(u);
		time=time+1;
		u.setF(time);
		
	}
	
	public void dfs(IGraph g){
		IVertex u;
		try {
			u=g.getFirstVertex();
			while(u!=null){
				u.setColour("White");
				u.setPi(null);
				u=g.getNextVertex();
			}
			time=0;
			u=g.getFirstVertex();
			while(u!=null){
				if(u.getColour()=="White"){
					dfsVisit(u);
				}
				u=g.getNextVertex();
			}
		} catch (Exception e) {
			
		}

	}
	
	
	public void topologicalSort(){
		dfs(g);
		
	}

}
