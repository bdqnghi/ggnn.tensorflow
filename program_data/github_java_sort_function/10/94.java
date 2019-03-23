  public void sort(Double[] A) {

        int n = A.length;
        List[] B = new ArrayList[n];

        for (int i = 0; i < n; i++)
            B[i] = new ArrayList<>();

        for (int i = 0; i < n; i++)
            B[(int) Math.floor(n * A[i])].add(A[i]);

        for (List b : B)
            Collections.sort(b);

        int i = 0;
        for (List b : B)
            for (Object d : b)
                A[i++] = (Double) d;

    }