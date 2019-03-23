   static void selectionSort(int[] arr, int n) {
        for (int lower = 0; lower < n - 1; lower++) {
            int minIndex = lower, minElement = arr[lower];
            for (int index = lower + 1; index < n; index++) {
                if (arr[index] < minElement) {
                    minElement = arr[index];
                    minIndex = index;
                }
            }
            if (minIndex != lower) {
                int temp = arr[lower];
                arr[lower] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }