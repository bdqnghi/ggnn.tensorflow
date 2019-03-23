  public void quickSort(final int[] arr,
                          final int low,
                          final int high) {
        if (low >= high) {
            return;
        }

        int mid = low + (high - low) / 2;
        int pivot = arr[mid];

        int low1 = low;
        int high1 = high;

        while (low1 < high1) {
            while (arr[low1] < pivot && low1 < high1) {
                low1++;
            }

            while (arr[high1] > pivot && high1 > low1) {
                high1--;
            }

            if (low1 < high1) {
                int temp = arr[low1];
                arr[low1] = arr[high1];
                arr[high1] = temp;
            }
        }

        quickSort(arr, low, mid);
        quickSort(arr, mid + 1, high);
    }
