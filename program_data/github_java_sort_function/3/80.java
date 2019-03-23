public void topologicalsortmethodutil(int i,boolean[] visited,Stack<Integer> stack)
    {
        visited[i]=true;
        for(int dest: l[i])
        {
            if(visited[dest]==false)
            {
                topologicalsortmethodutil(dest,visited,stack);
            }
        }
        stack.push(i);
    }

    public void topologicalsortmethod()
    {
        boolean[] visited=new boolean[v];
        for(int i=0;i<v;i++)
        {
            visited[i]=false;
        }
        Stack<Integer> stack=new Stack<Integer>();
        for(int i=0;i<v;i++)
        {
            if(visited[i]==false)
                topologicalsortmethodutil(i,visited,stack);
        }
        while(!stack.empty())
        {
            System.out.println(stack.pop());
        }
    }
}