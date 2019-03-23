
    public static void shellSort(int[] arr) {
        for (int i = 0; i < arr.length - 1;) {
            if (arr[i] <= arr[i + 1]) {
                i++;
            } else {
                swap(arr, i, i + 1);

                if (i > 0) {
                    i--;
                }
            }
        }
    }

    public static void swap(int[] arr, int i, int j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }