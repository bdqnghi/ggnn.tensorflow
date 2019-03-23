
    public static void insertionSort() {
        int ii = 0, jj = 0;
        for (ii = 1; ii < InsertionSort.ITEMS.length; ii++) {
            jj = ii;
            while ((jj > 0)
                    && (InsertionSort.ITEMS[jj] < InsertionSort.ITEMS[jj - 1])) {
                swap(jj, jj - 1);
                jj -= 1;
            }
        }
    }

    public static void swap(final int ii, final int jj) {
        final int temp = InsertionSort.ITEMS[ii];
        InsertionSort.ITEMS[ii] = InsertionSort.ITEMS[jj];
        InsertionSort.ITEMS[jj] = temp;
    }