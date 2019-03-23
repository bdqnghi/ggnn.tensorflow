  public static void Sort(Comparable[] a) {
        SortDivide(a, 0, a.length - 1);
    }

    private static void SortDivide(Comparable[] a, int lo, int hi) {
        if (lo >= hi) return;

        int pivot = Partation(a, lo, hi);
        SortDivide(a, lo, pivot - 1);
        SortDivide(a, pivot + 1, hi);

    }

    private static int Partation(Comparable[] a, int lo, int hi) {
        int i = lo, j = hi + 1;
        Comparable pivot = a[lo];
        while (true) {
            while (Less(a[++i], pivot)) if (i >= hi) break;
            while (Less(pivot, a[--j])) if (j <= lo) break;
            if (i >= j)
                break;
            Exchange(a, i, j);
        }
        Exchange(a, j, lo);
        return j;
    }