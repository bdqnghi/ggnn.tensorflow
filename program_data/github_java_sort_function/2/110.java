public static void mergesort(int[] array) {
        mergesort(array, new int[array.length], 0, array.length - 1);
    }

    
    private static void mergesort(int[] array, int[] temp, int start, int end) {
        if (start >= end) {
            return;
        }

        if (end - start == 1 && array[start] > array[end]) {
            swap(array, start, end);
            return;
        }

        int middle = (start + end) / 2;

        mergesort(array, temp, start, middle);
        mergesort(array, temp, middle + 1, end);
        merge(array, temp, start, middle, middle + 1, end);
    }

    
    public static void merge(int[] array, int[] temp, int leftStart, int leftEnd, int rightStart, int rightEnd) {
        int size = (leftEnd - leftStart) + (rightEnd - rightStart) + 2;
        int i = leftStart, j = rightStart;
        for (int m = 0; m < size; m++) {
            if (i > leftEnd) {
                temp[m] = array[j];
                j++;
            } else if (j > rightEnd) {
                temp[m] = array[i];
                i++;
            } else if (array[i] < array[j]) {
                temp[m] = array[i];
                i++;
            } else {
                temp[m] = array[j];
                j++;
            }
        }

        for (int m = 0; m < size; m++) {
            array[m + leftStart] = temp[m];
        }
    }

    
    private static void swap(int[] array, int i, int j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }