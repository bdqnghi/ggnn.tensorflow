 public static void quickSort(int[] a) {
        counter = 0;
        quickSort(a, 0, a.length - 1);
    }

    public static void quickSort(int[] a, int begin, int end) {

        if (end - begin <= 1) return;

        counter += (end - begin);
        int pivotIndex = partition(a, begin, end);

        quickSort(a, begin, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, end);
    }


    public static int partition(int[] a, int l, int r) {
        int p = a[l];
        int i = l + 1;
        for (int j = l + 1; j <= r; j++) {
            if (a[j] < p) {
                swap(a, j, i);
                i++;
            }
        }

        int newPivotIndex = i - 1;
        swap(a, l, newPivotIndex);
        return newPivotIndex;
    }

    private static void swap(int[] a, int i, int j) {
        int buf = a[i];
        a[i] = a[j];
        a[j] = buf;
    }
