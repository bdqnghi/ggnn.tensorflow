public void bubbleSortFor(int[] array) {

        System.out.println(Arrays.toString(array));
        int aux;

        for (int i = array.length; i > 0; i--) {
            for (int j = 0; j < i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    aux = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = aux;
                }
                System.out.println(Arrays.toString(array));
            }
        }
    }
