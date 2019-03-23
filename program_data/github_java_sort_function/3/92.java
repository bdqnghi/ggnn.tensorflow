


import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import javax.naming.BinaryRefAddr;


public class TopologicalSort {
    
    public static int current = 0;
    public static boolean[] explored;
    public static int[] topological;
    
    public static void DFS_topological(ArrayList[] nodes, int s)
    {
        
        explored[s] = true;
        if(nodes[s]!=null)
        {
            for(int i=0;i<nodes[s].size();i++)
            {
                int v = (int)nodes[s].get(i);
                System.out.println(s+" - "+v);
                if(explored[v]==false)
                {
                    DFS_topological(nodes,v );
                }
            }
            
        }
        
        System.out.println("C - " + current+" - "+s);;
        topological[current--]=s;
        
    }
    
    public static void main(String[] args) throws IOException{
        
        BufferedReader in = new BufferedReader(new FileReader("graph.txt"));
        
        String[] read = in.readLine().split("[ ]+");
        
        int n = Integer.parseInt(read[0]);
        current = n;
        System.out.println(n);
        int m = Integer.parseInt(read[1]);
        ArrayList[] nodes = new ArrayList[n+1];
        explored = new boolean[n+1];
        topological = new int[n+1];

        for(int i=0;i<m;i++)
        {
            read = in.readLine().split("[ ]+");
            int u = Integer.parseInt(read[0]);
            int v = Integer.parseInt(read[1]);
            
            if(nodes[u]==null)
                nodes[u]=new ArrayList<Integer>();
            nodes[u].add(v);
            
        }

        System.out.println(Arrays.toString(nodes));
        
        for(int i=1;i<=n;i++)
        {
            if(explored[i]==false)
                {
                    DFS_topological(nodes,i);
                }
            
        }
        
        System.out.println(Arrays.toString(topological));
        in.close();
        System.exit(0);
    }
    
}
