  public static void quicksort(int[] a, int start, int end) {
        if (start >= end)
            return;

        int pavot = a[start];
        int i = start;
        int j = end;

        while (i < j) {
            while (i < j && a[j] > pavot)
                j--;
            while (i < j && a[i] <= pavot)
                i++;
            if (i != j) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        if (i == j) {
            int t = a[start];
            a[start] = a[i];
            a[j] = t;
        }
        quicksort(a, start, i - 1);
        quicksort(a, i + 1, end);
    }