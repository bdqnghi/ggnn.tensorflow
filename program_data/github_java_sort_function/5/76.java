   static void bubbleSort(int[] arr) {

        
        
        int temp;
        
        for (int j = 0; j < arr.length-1; j++) {
            
            
            for (int i = 0; i < arr.length - 1 -j; i++) {
                if (arr[i] > arr[i + 1]) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }

    }