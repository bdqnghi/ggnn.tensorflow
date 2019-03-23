public static void insertionSort(int[] A)
    {
        int i, key;
        for (int j=1; j<A.length; j++){
            key=A[j];
            i=j-1;
            while (i>=0 && A[i]>key){
                A[i+1]=A[i];
                i--;
            }
            A[i+1]=key;
        }
        
        
    }
    
    