public static void quickSort(int[] arr, int low, int high) {
        
        
        if(arr == null || arr.length == 0){
            return;
        }
        
        if(low > high){
            return;
        }
        
        
        
        int middle = low +(high - low)/ 2;
        int pivot = arr[middle];
        
        
        
        int i = low;
        int j = high;
        
        while(i <= j){
            
            while(arr[i] < pivot){
                i++;
            }
            
            while(arr[j] > pivot){
                j--;
            }
            
            if(i <= j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
        
        if(low < j){
            quickSort(arr, low, j);
        }
        
        if(high > i){
            quickSort(arr, i, high);
        }
        
    }