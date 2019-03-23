public static void merge(int[] a, int startIndex, int midIndex, int endIndex){
                
        int leftArraySize = midIndex - startIndex + 1;
        int rightArraySize = endIndex - midIndex;
        
        
        int[] L = new int[leftArraySize + 1];
        int[] R = new int[rightArraySize + 1];
        int i, j = 1;
        
        for (i = 0; i < leftArraySize; i++){
            L[i] = a[startIndex + i];
        }       
        
        for (j = 0; j < rightArraySize; j++){
            R[j] = a[midIndex + j +1];
        }       
        
        
        L[leftArraySize] = Integer.MAX_VALUE;
        
        R[rightArraySize] = Integer.MAX_VALUE;
        
        
        i = 0;
        j = 0;
        for (int k = startIndex; k <= endIndex; k++){
            if (L[i] <= R[j]){
                a[k] = L[i];
                i = i + 1;
            }
            else{ 
                a[k] = R[j];
                j = j + 1;
            }
        }
    }

    public static void mergeSort(int[] a, int p, int r){
        
        int q = 0;
        if (p < r){
            q = (p + r)/2;
            mergeSort(a, p, q);
            mergeSort(a, q + 1, r);
            merge(a, p, q, r);
        }
    }