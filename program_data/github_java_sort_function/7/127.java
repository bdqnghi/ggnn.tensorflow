public static void gapsort(int[] arr, int begin, int end, int gap) {
        int temp = 0;
        int j = 0;
        
        for(int i = begin+gap; i<=end; i = i+gap) {
            temp = arr[i];
            for(j=i-gap; j>=begin && temp < arr[j]; j -= gap) {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
    
    public static void shellSort(int[] arr) {
        int gap = 0;
        int size = arr.length;
        
        gap = size / 2;
        while(gap >= 1) {
            for(int i=0; i<gap; i++) {
                gapsort(arr, i, size-1, gap);
            }
            
            gap /= 2;
        }
    }