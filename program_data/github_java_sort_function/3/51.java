void topologicalSortUtil(int v, boolean visited[],
                             Stack stack)
    {
        
        visited[v] = true;
        Integer i;
 
        
        Iterator<Integer> it = adj[v].iterator();
        while (it.hasNext())
        {
            i = it.next();
            if (!visited[i])
                topologicalSortUtil(i, visited, stack);
        }
 
        
        stack.push(new Integer(v));
    }
 
    
    void topologicalSort()
    {
        Stack stack = new Stack();
 
        
        boolean visited[] = new boolean[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;
 
        
        for (int i = 0; i < V; i++)
            if (visited[i] == false)
                topologicalSortUtil(i, visited, stack);
 
        
        while (stack.empty()==false)
            System.out.print(stack.pop() + " ");
    }
 
    
    