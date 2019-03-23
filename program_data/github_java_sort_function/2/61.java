
    private void mergeSort(int [] A, int start, int end, int [] temp) {
        
        if (start < end) {
            int mid = start + (end - start) / 2;
            mergeSort(A, start, mid, temp);
            mergeSort(A, mid + 1, end, temp);
            
            
            merge2(A, start, mid, end, temp);
        }
    }
    
    private void merge2(int [] A, int start, int mid, int end, int [] temp) {
        int i = mid, j = end, k = end; 
        
        while (i >= start && j >= mid+1) {
            if (A[i] > A[j]) {
                temp[k--] = A[i--];
            }
            else {
                temp[k--] = A[j--];
            }
        }
        
        if (i < start) {
            while (j >= mid+1) temp[k--] = A[j--];
        }
        if (j < mid+1) {
            while (i >= start) temp[k--] = A[i--];
        }
        
        for (int p = start; p <= end; ++p) {
            A[p] = temp[p];
        }
    }