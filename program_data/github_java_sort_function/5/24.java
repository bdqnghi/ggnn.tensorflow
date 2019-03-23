 public static <Key extends Comparable<Key>> void sort(Key[] a) {
        int N = a.length;
        for (int i = 0; i < N; i++) {
            int exchanges = 0;
            for (int j = N-1; j > i; j--) {
                if (less(a[j], a[j-1])) {
                    exch(a, j, j-1);
                    exchanges++;
                }
            }
            if (exchanges == 0) break;
        }
    }
