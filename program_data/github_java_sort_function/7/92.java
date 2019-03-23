  private static void sort(int[] array) {
        int length = array.length;
        int h = 1;
        while (h < length / 3) {
            h = 3 * h + 1;
        }

        while (h >=1) {
            for (int i = h; i < length; i++) {
                
                for (int j = i; j >= h && array[j] < array[j - h]; j -= h) {
                    Util.exchange(array, j, j - h);
                }
            }
            h /= 3;
        }

    }