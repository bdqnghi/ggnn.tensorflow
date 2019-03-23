  public static int test(int num) {
        final int[] array = {23, 8, -9, 5, 882, 0, 0, 1};

        for (int i = 0; i < array.length; i++) {
            for (int j = i + 1; j < array.length; j++) {
                if (array[j] < array[i]) {
                    final int tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                }
            }
        }
        return array[num];
    }