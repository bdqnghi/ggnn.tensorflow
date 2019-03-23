    public void sort(Comparable[] a) {
        sort(a, 0, a.length - 1);
    }

    private void insertionSort(Comparable[] a, int lo, int hi) {
        for (int i = lo; i < hi; i++)
            for (int j = i + 1; j > lo && less(a[j], a[j - 1]); j--)
                exch(a, j, j - 1);
    }

    private void sort(Comparable[] a, int lo, int hi) {
        
        
        int M = 10;
        if (lo + M >= hi) {
            insertionSort(a, lo, hi);
            return;
        }
        int j = partition(a, lo, hi);
        sort(a, lo, j - 1);
        sort(a, j + 1, hi);
    }

    private int partition(Comparable[] a, int lo, int hi) {
        int i = lo, j = hi + 1;
        Comparable v = a[lo];
        while (true) {
            while (less(a[++i], v))
                if (i == hi)
                    break;
            while (less(v, a[--j]))
                if (j == lo)
                    break;
            if (i >= j)
                break;
            exch(a, i, j);
        }
        exch(a, lo, j);
        return j;
    }