
    public void bubbleSortDoWhile(int[] array) {

        System.out.println(Arrays.toString(array));
        int aux;
        int i = array.length;

        do {
            int j = 0;
            do {
                if (array[j] > array[j + 1]) {
                    aux = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = aux;
                }
                j++;
                System.out.println(Arrays.toString(array));
            } while (j < (i - 1));
            i--;
        } while (i > 0);
    }