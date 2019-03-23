public static void selectionsort(int[] arr) {
        int counter = 1;
        while (counter <= arr.length - 1) {
            for (int i = counter; i < arr.length; i++) {
                if (arr[counter - 1] > arr[i]) {
                    int temp = arr[counter - 1];
                    arr[counter - 1] = arr[i];
                    arr[i] = temp;
                }
            }
            counter++;

        }
        display.display(arr);
    }
