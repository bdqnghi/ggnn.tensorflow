protected void sort(T[] array, int leftIndex, int rightIndex) {
        
        if (array.length > 1) {
            
            T aux = array[leftIndex];
            
            for (int i = leftIndex; i < rightIndex; i++) {
                for (int j = leftIndex; j < rightIndex; j++) {
                    
                    if (array[j].compareTo(array[j+1]) > 0) {
                        aux = array[j];
                        array[j] = array[j+1];
                        array[j+1] = aux;
                    }
                    
                }
            }
        }
        
    }