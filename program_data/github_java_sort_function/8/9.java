  
    public void sort(Integer[] array, int from, int end) {   
        quickSort(array, from, end);   
    }   
  
      
    private void quickSort(Integer[] array, int low, int high) {   
          
        if (low < high) {   
            
            
            
            int pivot = partition2(array, low, high);   
            
            
              
            quickSort(array, low, pivot - 1);   
            quickSort(array, pivot + 1, high);   
        }   
  
    }   
  
  
    
       public void swap(Integer[] array, int i, int j) {   
        if (i != j) {
            Integer tmp = array[i];   
            array[i] = array[j];   
            array[j] = tmp;   
        }   
    } 
    
      
    private int partition2(Integer[] array, int low, int high) {   
        int pivot = low;
        
        while (true) {   
            if (pivot != high) {
                
                if ((array[high].compareTo(array[pivot])) < 0) {   
                    swap(array, high, pivot);   
                    
                    pivot = high;   
                } else {
                    high--;   
                }   
            } else {
                
                if ((array[low].compareTo(array[pivot])) > 0) {   
                    swap(array, low, pivot);   
                    
                    pivot = low;   
                } else {
                    low++;   
                }   
            }   
            if (low == high) {   
                break;   
            }   
        }   
        
        return pivot;   
    }   