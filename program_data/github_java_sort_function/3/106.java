public static ArrayList<Integer> topologicalSort(HashMap<Integer, HashSet<Integer>> graph){
        Stack<Integer> st = new Stack<Integer>();
        ArrayList<Integer> visited = new ArrayList<Integer>();
        ArrayList<Integer> result = new ArrayList<Integer>();
        for (int key : graph.keySet()){
            if(!visited.contains(key)){
                visited.add(key);
                st.push(key);
                topologicalSearch(graph, visited, st,result, key);
            }
        }

        if(!st.isEmpty())
            result.add(st.pop());
    
        return result;
    }


    