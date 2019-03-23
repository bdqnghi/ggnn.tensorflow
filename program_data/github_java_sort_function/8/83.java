public static void sort(Comparable[] a)
     {
        StdRandom.shuffle(a);          
        sort(a, 0, a.length - 1);
     }

    private static void sort(Comparable[] a, int lo, int hi, int pivot) {
        while(lo < hi) {
            int j = partition(a, lo, hi);
            sort(a, lo, pivot);
            sort(a, pivot + 1, hi);
        }

        return;
    }

    public static void partition(Comparable[] a, int lo, int hi) {
        
        int i = lo; 
        int j = hi + 1; 
        Comparable pivot = a[lo];  

        while(true) {
            
            while(less(a[++i], pivot)) if(i == hi) break;
            while(less(pivot, a[--j])) if(j == lo) break;
            if(i >= j) break;
            exch(a, i, j);
        }

        exch(a, lo, j); 
        return j; 

    }