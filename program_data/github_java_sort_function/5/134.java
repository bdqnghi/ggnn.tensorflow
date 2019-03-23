public void bubbleSortWhile(int[] array) {

        System.out.println(Arrays.toString(array));
        int aux;
        int i = array.length;

        while (i > 0) {
            int j = 0;
            while (j < i - 1) {
                if (array[j] > array[j + 1]) {
                    aux = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = aux;
                }
                j++;
                System.out.println(Arrays.toString(array));
            }
            i--;
        }
    }