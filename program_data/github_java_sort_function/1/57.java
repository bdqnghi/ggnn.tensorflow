
    public void insertionSort(int[] array) {
        int previousIndex;
        int value;
        int i;
        for (i = 0; i < array.length; i++) {
            previousIndex = i - 1;
            value = array[i];
            while ((previousIndex >= 0) && (array[previousIndex] > value)) {
                
                array[previousIndex + 1] = array[previousIndex];
                previousIndex = previousIndex - 1;
            }
            array[previousIndex + 1] = value;

        }
        System.out
                .println("Printing the sorted Array using the insertion sort");
        for (int j = 0; j < array.length; j++) {
            System.out.print(array[j] + " ");

        }
        System.out.println();
    }