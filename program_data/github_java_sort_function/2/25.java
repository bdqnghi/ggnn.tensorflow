  
    void merge(int A[], int l, int m, int r) {
        
        int nL = m - l + 1; 
        int nR = r - m; 

        
        int left[] = new int [nL];
        int right[] = new int [nR];

        for (int i = 0; i < nL; ++i)
            left[i] = A[l + i];
        for (int j = 0; j < nR; ++j)
            right[j] = A[m + 1 + j];

        

        
        int i = 0, j = 0;
        int k = l;  

        
        while (i < nL && j < nR) {
            if (left[i] <= right[j]) {
                A[k] = left[i];
                i++;
            } else {
                A[k] = right[j];
                j++;
            }
            k++;
        }
        
        while (i < nL) {
            A[k] = left[i];
            i++;
            k++;
        }
        
        while (j < nR) {
            A[k] = right[j];
            j++;
            k++;
        }
    }

    
    
    void merge_sort(int A[], int l, int r) {
        if (l < r) {
            int mid = (l + r) / 2; 

            merge_sort(A, l, mid); 
            merge_sort(A , mid + 1, r); 
            merge(A, l, mid, r); 
        }
    }