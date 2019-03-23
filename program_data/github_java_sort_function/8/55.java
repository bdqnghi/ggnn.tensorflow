 public static int compare(String a, String b){
        if(a.length() < b.length())
            return -1;
        else if(a.length() > b.length())
            return 1;
        else
            return a.compareTo(b);
    }

    
    public static long sort(String[] A){
        
        long startTime = System.nanoTime();
        
        
        quick_sort(A, 0, A.length - 1);

        
        long endTime = System.nanoTime();
        return endTime - startTime;
    }

    
    public static int partition(String[] A, int p, int r){
        String x = A[r];
        String tmp;
        int i = p - 1;
        for(int j = p; j < r; j++){
            if(compare(A[j], x) <= 0){
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

    public static void quick_sort(String[] A, int p, int r){
        if(p < r){
            int q = partition(A, p, r);
            quick_sort(A, p, q-1);
            quick_sort(A, q+1, r);
        }
    }