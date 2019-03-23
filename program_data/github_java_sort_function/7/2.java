   public static void shellSort(int[] arr) {
        if (SortUtil.isEmpty(arr)) {
            return;
        }

        final int length = arr.length;
        int interval = length / 2;

        while (interval >= 1) {
            for (int i = 0; i < length; i++) {
                intervalSort(arr, i, length - 1, interval);
            }

            interval /= 2;
        }
    }
