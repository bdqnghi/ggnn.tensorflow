static public void sort(int[] a) {
        boolean swapped = true;
        for (int length = a.length; swapped ; length--) {
            swapped = false;
            for (int j = 1; j < length; j++) {
                if (a[j - 1] > a[j]) {
                    swap(a, j - 1, j);
                    swapped = true;
                }
            }
        }
    }