    public void sort(Comparable[] a) {
        int N = a.length;
        int h = 1;
        while (h < N / 3)
            h = h * 3 + 1;
        while (h >= 1) {
            for (int i = 0; i < N; i++) {
                count++;
                for (int j = i; j >= h && less(a[j], a[j - h]); j -= h) {
                    exch(a, j, j - h);
                }
            }
            h /= 3;
        }
        System.out.println(count / N);
    }