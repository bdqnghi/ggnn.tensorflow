  public int[] sorter(int[] array) {
        int temp, index = 0;

        for (int i = 0; i < array.length; i++) {
            int min = 999;
            for (int j = i; j < array.length; j++) {
                if (array[j] < min) {
                    min = array[j];
                    index = j;
                }
            }
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }

        return array;
    }