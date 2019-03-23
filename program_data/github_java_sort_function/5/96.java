  public static void BubbleSort(int[] array) {
        for (int j = 0; j < array.length; j++) {
            boolean isSwapped = false;
            for (int i = 0; i < array.length - 1 - j; i++) {
                if (array[i] > array[i + 1]) {
                    swap(array, i, i + 1);
                    isSwapped = true;
                }
            }
            if (!isSwapped)
                return;
        }
    }
    public static void swap(int[] array, int index1, int index2) {
        int temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;
    }