public static void mergeSort(int[] A) {
        mergeSort(A, 0, A.length);
    }
    public static void mergeSort(int[] A, int p, int r) {
        
        if(p < r) {
            int q = ((p + r) / 2);
            mergeSort(A, p, q);
            mergeSort(A, q + 1, r);
            merge(A, p, q, r);
        }
    }
    public static void merge(int[] A, int p, int q, int r) {
        int n1 = q - p,
            n2 = r - q;
        int[] L = new int[n1 + 1],
              R = new int[n2 + 1];
        
        for(int i = 0; i < n1; i++) {
            L[i] = A[p + i];
        }
        for(int j = 0; j < n2; j++) {
            R[j] = A[q + j];
        }
        
        L[n1] = Integer.MAX_VALUE;
        R[n2] = Integer.MAX_VALUE;
        
        int i = 0,
            j = 0;

        for(int k = p; k < r; k++) {
            if(L[i] <= R[j]) {
                A[k] = L[i];
                i++;
            }
            else {
                A[k] = R[j];
                j++;
            }
        }
    }