
    public static void insertionSort(float[] array) {
        if (array.length <= 1)
            return;
        int size = array.length;
        float key;
        for (int i = 1; i < size; i++) {
            key = array[i];
            int j = i - 1;
            while (j >= 0 && key < array[j]) {
                array[j + 1] = array[j];
                j -= 1;
            }
            array[j + 1] = key;
        }
    }
