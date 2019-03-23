 
    public static void sort(int[] a) {
        for (int i = 1; i < a.length; ++i) {
            int value = a[i];
            int j = i;
            while (j > 0 && a[j - 1] > value) {
                a[j] = a[j - 1];
                j = j - 1;
            }
            a[j] = value;
        }
    }