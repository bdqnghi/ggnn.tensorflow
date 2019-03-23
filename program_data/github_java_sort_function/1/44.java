public void sort(int[] arr) {
        for(int i=1; i<arr.length; i++) {
            int value = arr[i];
            int j;
            for(j=i-1; j>=0 && value < arr[j]; j--) {
                    arr[j+1] = arr[j];
            }
            arr[j+1] = value;
        }
        
    }