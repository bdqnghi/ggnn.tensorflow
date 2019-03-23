 public int[] sort(int[] array) {
        for (int j = 0; j < array.length; ++j) {
            int minimumNumberIndex = getMinimumNumberIndex(array, j);
            swap(array, j, minimumNumberIndex);

        }
        return array;
    }

    public int getMinimumNumberIndex(int[] array, int j) {
        int minimumNumberIndex = j;
        for (int i = j; i < array.length; ++i)
            if (array[i] < array[minimumNumberIndex]) {
                minimumNumberIndex = i;
            }
        return minimumNumberIndex;
    }

    public static void swap(int[] array, int j, int minimumNumberIndex) {
        int temp = array[j];
        array[j] = array[minimumNumberIndex];
        array[minimumNumberIndex] = temp;
    }