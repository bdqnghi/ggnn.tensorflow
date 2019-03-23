    public static void sort(int array[], int n){        
        for (int i = 1; i < n; i++){    
            int j = i;
            int B = array[i];
            while ((j > 0) && (array[j-1] > B)){ 
            
                array[j] = array[j-1];
                
                j--;
                
            }
            
            array[j] = B;
            
        }
        
    }