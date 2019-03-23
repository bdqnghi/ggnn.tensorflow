public static void quicksort(int[] a, int lo, int hi) {
        
        
        int i = lo, j = hi, h;
        int x = a[(lo + hi) / 2];

        
        do {
            while (a[i] < x) {
                i++;
            }
            while (a[j] > x) {
                j--;
            }
            if (i <= j) {
                h = a[i];
                a[i] = a[j];
                a[j] = h;
                i++;
                j--;
            }
        } while (i <= j);

        
        if (lo < j)
            quicksort(a, lo, j);
        if (i < hi)
            quicksort(a, i, hi);
    }
