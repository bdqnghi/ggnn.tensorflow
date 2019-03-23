public static void sort(Comparable[] a)
    {
        int N = a.length-1;
        
        for (int k=N/2; k>=0; k--)
        {
            sink(a, k, N);
        }
        
        while (N>0)
        {
            Tools.exch(a, 0, N--);
            sink(a, 0, N);
        }
    }

    private static void sink(Comparable[] a, int k, int N)
    {   
        while (2*k+1 <= N)
        {
            int j = 2*k+1;
            if ( j<N && Tools.less(a[j], a[j+1]) )  j++ ;   
            if ( !Tools.less(a[k], a[j]) ) break;           
            Tools.exch(a, k, j);
            k = j;
        }
    }