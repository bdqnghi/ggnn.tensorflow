private void mergeSort(int lo, int hi) {
        
        
        
            int mid = lo + (hi - lo) / 2;
        if (lo < hi) {
            
            
            
            mergeSort(lo, mid);
            
            mergeSort(mid + 1, hi);
            
            merge(lo, mid, hi);
        }
    }

    private void merge(int lo, int mid, int hi) {

        
        
        for (int i = lo; i <= hi; i++) {
            helpArr[i] = arr[i];
        }

        int helpLo = lo;
        int helpMid = mid;
        int oriLo = lo; 
        
        
        
        
        
        
        

        while (helpLo <= mid-1 && helpMid <= hi) {
            if (helpArr[helpLo] <= helpArr[helpMid]) {
                
                arr[oriLo] = helpArr[helpLo];
                
                helpLo++;
            } else {
                arr[oriLo] = helpArr[helpMid];
                
                helpMid++;
            }
            oriLo++;
        }
        

        while (helpLo <= mid-1) {
            arr[oriLo] = helpArr[helpLo];
            oriLo++;
            helpLo++;
        }
        
        
        
        
        
        
        


    }