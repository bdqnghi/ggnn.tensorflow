
import java.util.Scanner;
import java.util.Stack;

public class TopologicalSort
{
    private Stack<Integer> stack;
    public TopologicalSort()
    {
        stack=new Stack<Integer>();
    }
    public int[] Topological(int adjacencyMatrix[][],int source)
    {
        int number_of_nodes=adjacencyMatrix[source].length-1;
        int[] topological_sort=new int[number_of_nodes+1];
        int pos=1;
        int j;
        int visited[]=new int[number_of_nodes+1];
        int element=source;
        int i=source;
        visited[source]=1;
        stack.push(source);
        
        while(!stack.isEmpty())
        {
            element=stack.peek();
            while(i<=number_of_nodes)
            {
                if(adjacencyMatrix[element][i]==1 && visited[i]==1)
                {
                    System.out.println("TOPOLOGICAL SORT NOT POSSIBLE");
                    return null;
                }
                if(adjacencyMatrix[element][i]==1 && visited[i]==0)
                {
                    stack.push(i);
                    visited[i]=1;
                    element=i;
                    i=1;
                    continue;
                }
                i++;
            }
            j=stack.pop();
            topological_sort[pos++]=j;
            i=++j;
        }
        return topological_sort;
    }
 
}
