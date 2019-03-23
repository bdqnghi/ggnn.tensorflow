 public static int[] selectionSort(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            int index = i;
            int min = arr[i];
            for (int j = i; j < arr.length; j++) {
                if (arr[j] < min) {
                    index = j;
                    min = arr[j];
                }
            }
            swap(arr, i, index);
        }
        return arr;
    }

    public static void swap(int[] arr, int index1, int index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }