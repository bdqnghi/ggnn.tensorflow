public static int[] topoSort(ArrayList<Integer> graph[], int N) {
        boolean[] visited = new boolean[N];
        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < N; i++) {
            if (!visited[i]) {
                sort(graph, i, visited, stack);
            }
        }

        int[] result = new int[stack.size()];
        int i = 0;
        while (!stack.isEmpty()) {
            result[i++] = stack.pop();
        }

        return result;
    }

    private static void sort(ArrayList<Integer> graph[], int start, boolean[] visited, Stack<Integer> stack) {
        visited[start] = true;

        Iterator<Integer> iterator = graph[start].iterator();
        while (iterator.hasNext()) {
            int next = iterator.next();
            if (!visited[next]) {
                sort(graph, next, visited, stack);
            }
        }

        stack.push(start);
     }
}