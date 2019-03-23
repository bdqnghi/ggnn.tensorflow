    public static <T extends Comparable<T>> void sort(List<T> a) {
        Collections.shuffle(a);
        sort(a, 0, a.size() - 1);
    }

    private static <T extends Comparable<T>> void sort(List<T> a, int lo, int hi) {
        if (hi <= lo + M) {
            Insertion.sort(a, lo, hi);
            return;
        }

        int j = partition(a, lo, hi);

        sort(a, lo, j - 1);
        sort(a, j + 1, hi);
    }

    
    public static <T extends Comparable<T>> void mediansort(List<T> a) {
        Collections.shuffle(a);
        mediansort(a, 0, a.size() - 1);
    }

    private static <T extends Comparable<T>> void mediansort(List<T> a, int lo, int hi) {
        if (hi <= lo + M) {
            Insertion.sort(a, lo, hi);
            return;
        }

        T pivot = SortUtils.median(a, lo, hi);
        int i = lo, j = hi - 1; 

        for (; ; ) {
            while (a.get(++i).compareTo(pivot) < 0) ;
            while (pivot.compareTo(a.get(--j)) < 0) ;
            if (i < j)
                SortUtils.exchange(a, i, j);
            else break;
        }

        SortUtils.exchange(a, i, hi - 1); 

        mediansort(a, lo, i - 1);
        mediansort(a, i + 1, hi);
    }

    private static <T extends Comparable<T>> int partition(List<T> a, int lo, int hi) {
        int i = lo;
        int j = hi + 1;

        T v = a.get(lo);

        while (true) {
            while (SortUtils.less(a.get(++i), v)) if (i == hi) break;
            while (SortUtils.less(v, a.get(--j))) if (j == lo) break;

            if (i >= j) break;
            SortUtils.exchange(a, i, j);
        }

        SortUtils.exchange(a, lo, j);

        return j;
    }