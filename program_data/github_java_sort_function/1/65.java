public static int[] inserSort(int[] x) {
        for (int i = 1; i < x.length; i++) {
            int k;
            for (int j = i; j > 0; j--) {
                if (x[j] < x[j - 1]) {
                    k = x[j];
                    x[j] = x[j - 1];
                    x[j - 1] = k;
                }
            }
        }
        return x;
    }
}