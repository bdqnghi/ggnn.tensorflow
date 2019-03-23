static void shellSort(int[] arr) {
        int temp = 0, h = 1, j = 0;
        do
            h = 3 * h + 1;
        while (h < arr.length);
        do {
            h = h / 3;
            for(int i = h; i < arr.length; i++) {
                temp = arr[i];
                j = i;
                while ((j >= h) && (arr[j-h] > temp)) {
                    arr[j] = arr[j - h];
                    j = j - h;
                }
                arr[j] = temp;
            }           
        } while (h != 1);
    }