public static <T extends Comparable<? super T>> double sort(T[] pq) {
        compares = 0;
        int n = pq.length;
        for (int k = n/2; k >= 1; k--)
            sink(pq, k, n);
        while (n > 1) {
            exch(pq, 1, n--);
            sink(pq, 1, n);
        }
        return compares;
    }

   

    private static <T extends Comparable<? super T>> void sink(T[] pq, int k, int n) {
        while (2*k <= n) {
            int j = 2*k;
            if (j < n && less(pq, j, j+1)) j++;
            if (!less(pq, k, j)) break;
            exch(pq, k, j);
            k = j;
        }
    }

   
    private static <T extends Comparable<? super T>> boolean less(T[] pq, int i, int j) {
        compares++;
        return pq[i-1].compareTo(pq[j-1]) < 0;
    }

    private static void exch(Object[] pq, int i, int j) {
        Object swap = pq[i-1];
        pq[i-1] = pq[j-1];
        pq[j-1] = swap;
    }

    
    private static <T extends Comparable<? super T>> boolean less(T v, T w) {
        return v.compareTo(w) < 0;
    }
        

   
    private static <T extends Comparable<? super T>> boolean isSorted(T[] a) {
        for (int i = 1; i < a.length; i++)
            if (less(a[i], a[i-1])) return false;
        return true;
    }


    
    private static <T> void show(T[] a) {
        for (int i = 0; i < a.length; i++) System.out.print(a[i]+" ");
        System.out.println();
    }