public static void bubbleSort(int[] arr) {
        int length = arr.length;
        int k;

        for (int i = length; i >= 0; i--) {
            for (int j = 0; j < length-1; j++) {
                k = j + 1;

                if (arr[j] > arr[k])
                    swap(j, k, arr);
            }
            printArray(arr);
        }
    }

  

    private static void swap(int j, int k, int[] arr) {
        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;

    }