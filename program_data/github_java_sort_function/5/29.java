 static void bubbleSort(int[] arr, int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int index = n - 1; index >= i + 1; index--) {
                if (arr[index] < arr[index - 1]) {
                    int temp = arr[index];
                    arr[index] = arr[index - 1];
                    arr[index - 1] = temp;
                }
            }
        }
    }