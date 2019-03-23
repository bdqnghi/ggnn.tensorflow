private void insertionSort(int[] a, int len) {
        
        for (int i = 1; i < len; i++) {
            int value = a[i];   
            int position = i;   
            
            
            while (position > 0 && a[position-1] > value) {
                a[position] = a[position-1];    
                position--;                     
            }
            
            
            a[position] = value;
        }
    }
    