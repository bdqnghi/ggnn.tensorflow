    public static int[] swap(int numbers[], int i, int j) {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
        return numbers;
    }

    public static int[] sort(int array[]) {
        for (int index = 1; index < array.length; index++) {
            for (int indexj = 0; indexj < index-1; indexj++)
                if (array[indexj] > array[index]) {
                    array = swap(array, indexj, index);
                }
        }
        return array;
    }
