  
    private static void bucketsort(List S, int N) {
        List[] B = new LinkedList[N];
        for (int i = 0; i < N; i++) {
            B[i] = new LinkedList();
        }

        
        while (!S.isEmpty()) {
            int k = (Integer) S.remove(0);
            B[k].add(k);
        }
        System.out.println(Arrays.toString(B));

        
        for (int i = 0; i < N; i++) {
            while (!B[i].isEmpty()) {
                S.add(B[i].remove(0));
            }
        }

    }