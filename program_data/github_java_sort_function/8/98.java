  public static long sort(int[] A){
        
        long startTime = System.nanoTime();
        
        
        quick_sort(A, 0, A.length - 1);

        
        long endTime = System.nanoTime();
        return endTime - startTime;
    }

    
    public static int partition(int[] A, int p, int r){
        int x = A[r];
        int tmp;
        int i = p - 1;
        for(int j = p; j < r; j++){
            if(A[j] <= x){
                i++;
                
                
                tmp = A[j];
                A[j] = A[i];
                A[i] = tmp;
            }
        }
        i++;
        A[r] = A[i];
        A[i] = x;
        return i;
    }

    public static void quick_sort(int[] A, int p, int r){
        if(p < r){
            int q = partition(A, p, r);
            quick_sort(A, p, q-1);
            quick_sort(A, q+1, r);
        }
    }