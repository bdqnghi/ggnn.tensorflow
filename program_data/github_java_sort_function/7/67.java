   public static <T extends Comparable<T>> void sort(T[] a) {
        int N = a.length;
        int h = calculateH(N);
        while (h >= 1) {
            for (int i = h; i < N; i++) {
                for (int j = i; j >= h && less(a[j], a[j - h]); j -= h)
                    exchange(a, j, j - h);
            }
            h = h / 3;
        }
    }