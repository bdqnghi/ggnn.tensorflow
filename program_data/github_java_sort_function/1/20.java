public static int[] insertionSort(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            for (int j = i; j != 0; j--) {
                if (arr[j-1] > arr[j]) {
                    swap(arr, j-1, j);
                } else {
                    break;
                }
            }
        }
        return arr;
    }

    public static void swap(int[] arr, int index1, int index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
