  public static void bubble_sort(int[] A){
        int tmp;
        int l = A.length;
        for(int i = 0; i < l - 1; i++){
            for(int j = 1; j < l; j++){
                if(A[j - 1] > A[j]){
                    
                    tmp = A[j];
                    A[j] = A[j - 1];
                    A[j - 1] = tmp;
                }
            }
        }
    }