 public void quicksort(int A[], int p, int r) {
        if (p < r) { 
            int q = partition(A, p, r);
            quicksort(A, p, q - 1);
            quicksort(A, q + 1, r);
        }
    }



    
    private int partition(int A[], int p, int r) {
        int x = A[r];
        int i = p - 1;
        for (int j = p; j < r; j++) {
            if (A[j] <= x) {
                i = i + 1;
                swap(A, i, j);
            }
            swap(A, i + 1, r);
        }
        return i + 1;
    }

    
    private void swap(int A[], int i, int j) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }