private static void iSort(int[] arr, int n) {
        int i, j, temp;
        for(i = 0; i < n-1; i++){
            for(j = i+1; j >= 1 && arr[j] < arr[j-1]; j--){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }