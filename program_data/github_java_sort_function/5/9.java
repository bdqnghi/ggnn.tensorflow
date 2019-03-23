   public static void bubbleSort(int arr[]) {
        int swaps = 0;
        int temp = 0;
        int lastSorted = arr.length - 1;

        for(int n = 0; n < arr.length; n++) {
            for(int i = 0; i < lastSorted; i++) {
                if(arr[i] > arr[i + 1]) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    swaps++;
                }
            }
            lastSorted--;
        }

    }