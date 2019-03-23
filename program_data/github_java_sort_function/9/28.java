
    private static void sort(int[] array) {
        int length = array.length;

        for (int i = 0; i < length; i++) {
            int min = i;
            for (int j = i + 1; j < length; j++) {
                if (array[j] < array[min]) {
                    min = j;
                }
            }

            Util.exchange(array, i, min);
        }
    }

