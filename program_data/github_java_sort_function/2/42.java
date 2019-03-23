    static void merge(int[] A, int p, int q, int r) {
        int n1 = q - p + 1;
        int n2 = r - q;
        int[] B = new int[n1];
        int[] C = new int[n2];
        for (int i = 0; i < n1; i++)
            B[i] = A[p + i];
        for (int i = 0; i < n2; i++)
            C[i] = A[q + 1 + i];
        int a = p, b = 0, c = 0;
        while (b < n1 && c < n2) {
            if (B[b] <= C[c]) {
                A[a] = B[b];
                b++;
            } else {
                A[a] = C[c];
                c++;
            }
            a++;
        }
        while (b < n1) {
            A[a] = B[b];
            b++;
            a++;
        }
        while (c < n2) {
            A[a] = C[c];
            c++;
            a++;
        }
    }

    static void mergeSort(int[] A, int p, int r) {
        if (p < r) {
            int q = (p + r) / 2;
            mergeSort(A, p, q);
            mergeSort(A, q + 1, r);
            merge(A, p, q, r);
        }
    }