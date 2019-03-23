  public void sort(int[] arr) {
        temp = new int[arr.length];
        doSort(arr,0,arr.length-1);
    }
    
    private void doSort(int[] arr, int low, int high) {
        printLine("Sorting low = " + low + "; high = " + high);
        
        if (high <= low) return;
        
        int mid = low + (high - low) / 2;
        doSort(arr,low,mid);
        doSort(arr,mid+1, high);
        mergeArrays(arr, low, mid, high);
    }
    
    public void mergeArrays(int[] arr, int low, int mid, int high) {
        
        printLine("\nReceived low = " + low + "; mid = " + mid + "; high = " + high);
        
        for (int i = low; i <= high; i++) {
            temp[i] = arr[i];
        }
        
        int i = low;
        int j = mid + 1;
        int k = low;
        
        while (i <= mid && j <= high) {
            
            if (temp[j] < temp[i]) {
                arr[k++] = temp[j++]; 
            } else {
                arr[k++] = temp[i++]; 
            }
        }
       
        if (i > mid) {
            
            while (j <= high) {
                arr[k++] = temp[j++];
            }
        }
        
        if (j > high) {
            
            while (i <= mid) {
                arr[k++] = temp[i++];
            }
        }
        if (DEBUG) {
            System.out.print("Merged Array...   ");
            ArrayHelper.printArray(arr);
        }
    }