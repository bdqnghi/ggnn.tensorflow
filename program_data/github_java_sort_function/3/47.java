public static Stack<String> resolveDepsWithTopSort(String[][] deps) {
        HashMap<String, String[]> graph = createGraph(deps);        

        Set<String> visited = new HashSet<>();
        Stack<String> st = new Stack<>();

        
        
        String root = "A";
        topologicalSort(root, graph, st, visited);

        return st;
    }

    private static void topologicalSort(String root, HashMap<String, String[]> graph, Stack<String> st, Set<String> visited) {

        Stack<String> traverseStack = new Stack<>();
        traverseStack.push(root);

        while(traverseStack.isEmpty() == false) {

            String current = traverseStack.peek();
            
            if(visited.contains(current)) {
                traverseStack.pop();
                continue;
            }

            if(graph.containsKey(current)) {

                String[] children = graph.get(current);
                ArrayList<String> unvisitedChildren = new ArrayList<>();
                
                
                for(int i=0; i<children.length; i++ ){
                    String child= children[i];
                    
                    if(visited.contains(child) == false) {
                        unvisitedChildren.add(child);
                    }
                }


                if(unvisitedChildren.size() == 0){
                    st.push(current); 
                    traverseStack.pop();   
                    visited.add(current);
                } else {
                    for(int i = 0; i<unvisitedChildren.size(); i++) {
                        traverseStack.push(unvisitedChildren.get(i));
                    }
                }
            } else {
                st.push(current);
                traverseStack.pop();
                visited.add(current);
            }
        }
    }
}