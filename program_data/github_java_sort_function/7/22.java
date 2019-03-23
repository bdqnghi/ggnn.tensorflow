public void shellSort(int[] array) {
        for(int gap = array.length / 2; gap > 0; gap /= 2) {
            for(int i = 0; i < gap; i++) {
                for(int j = i; j < array.length; j += gap) {
                    int min = j;
                    for(int k = j + gap; k < array.length; k += gap) {
                        if(array[k] < array[min]) {
                            min = k;
                        }
                    }
                    swap(array, j, min);
                }
            }
        }
    }

    public void swap(int[] array, int a, int b) {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
    }