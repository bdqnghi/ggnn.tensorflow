 public static void quickSort(SaveCarrier[] array) {
        int startIndex = 0;
        int endIndex = array.length - 1;
        doSort(array, startIndex, endIndex);
    }

    private static void doSort(SaveCarrier[] array, int start, int end) {
        if (start >= end)
            return;
        int i = start, j = end;
        int cur = i - (i - j) / 2;
        while (i < j) {
            while (i < cur && (array[i].compareTo(array[cur])) != 1) {
                i++;
            }
            while (j > cur && (array[cur].compareTo(array[j])) != 1) {
                j--;
            }
            if (i < j) {
                SaveCarrier temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                if (i == cur)
                    cur = j;
                else if (j == cur)
                    cur = i;
            }
        }
        doSort(array, start, cur);
        doSort(array, cur + 1, end);
    }