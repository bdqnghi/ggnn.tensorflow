   public static int[] shellSort(int[] arr) {
        int gap = 1, i, j, len = arr.length;
        int temp;
        while (gap < len / 3) {
            
            gap = gap * 3 + 1;
        }
        
        for (; gap > 0; gap /= 3) {
            
            for (i = gap; i < len; i++) {
                temp = arr[i];
                
                for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap) {
                    arr[j + gap] = arr[j];
                }
                arr[j + gap] = temp;
            } 

            print(arr);
        } 

        return arr;
    }