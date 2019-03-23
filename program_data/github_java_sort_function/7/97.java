 public void shellSort(int[] array) {
        int increment, i, j;
        for (increment = array.length / 2; increment > 0; increment /= 2) {

            System.out.println(increment);
            for (i = increment; i < array.length; i++) {
                int temp = array[i];

                for (j = i - increment; j >= 0; j = j - increment) {
                    if (array[j] > temp) {

                        array[j + increment] = array[j];
                    } else {
                        break;
                    }
                }
                
                array[j + increment] = temp;
            }
        }
    }