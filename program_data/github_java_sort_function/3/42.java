package questions;
class Vertex {
	  public char label;

	  public Vertex(char lab) {
	    label = lab;
	  }
	}

	public class topologicalsort {
	  private final int MAX_VERTS = 20;

	  private Vertex vertexList[]; 

	  private int matrix[][]; 

	  private int numVerts; 

	  private char sortedArray[];

	  public topologicalsort() {
	    vertexList = new Vertex[MAX_VERTS];
	    matrix = new int[MAX_VERTS][MAX_VERTS];
	    numVerts = 0;
	    for (int i = 0; i < MAX_VERTS; i++)
	      for (int k = 0; k < MAX_VERTS; k++)
	        matrix[i][k] = 0;
	    sortedArray = new char[MAX_VERTS]; 
	  }

	  public void addVertex(char lab) {
	    vertexList[numVerts++] = new Vertex(lab);
	  }

	  public void addEdge(int start, int end) {
	    matrix[start][end] = 1;
	  }

	  public void displayVertex(int v) {
	    System.out.print(vertexList[v].label);
	  }

	  public void topo() 
	  {
	    int orig_nVerts = numVerts; 

	    while (numVerts > 0) 
	    {
	      
	      int currentVertex = noSuccessors();
	      if (currentVertex == -1) 
	      {
	        System.out.println("ERROR: Graph has cycles");
	        return;
	      }
	      
	      sortedArray[numVerts - 1] = vertexList[currentVertex].label;

	      deleteVertex(currentVertex); 
	    }

	    
	    System.out.print("Topologically sorted order: ");
	    for (int j = 0; j < orig_nVerts; j++)
	      System.out.print(sortedArray[j]);
	    System.out.println("");
	  }

	  public int noSuccessors() 
	  { 
	    boolean isEdge; 

	    for (int row = 0; row < numVerts; row++) {
	      isEdge = false; 
	      for (int col = 0; col < numVerts; col++) {
	        if (matrix[row][col] > 0) 
	        {
	          isEdge = true;
	          break; 
	        }
	      }
	      if (!isEdge) 
	        return row;
	    }
	    return -1; 
	  }

	  public void deleteVertex(int delVert) {
	    if (delVert != numVerts - 1) 
	    {
	      for (int j = delVert; j < numVerts - 1; j++)
	        vertexList[j] = vertexList[j + 1];

	      for (int row = delVert; row < numVerts - 1; row++)
	        moveRowUp(row, numVerts);

	      for (int col = delVert; col < numVerts - 1; col++)
	        moveColLeft(col, numVerts - 1);
	    }
	    numVerts--; 
	  }

	  private void moveRowUp(int row, int length) {
	    for (int col = 0; col < length; col++)
	      matrix[row][col] = matrix[row + 1][col];
	  }

	  private void moveColLeft(int col, int length) {
	    for (int row = 0; row < length; row++)
	      matrix[row][col] = matrix[row][col + 1];
	  }

	 
	}