    void bubblesort(){
        
        for (int i =0; i < array.length-1 ; i++){
            
              for (int j= 0; j < array.length-1; j++){
                  
                  if(array[j+1] < array[j]){
                      swapIndexValues(j,j+1);
                  }
               }
            }   
            printArray(array);
         }
    
    void swapIndexValues(int currentIndex, int nextIndex){
        int temp;
        temp = array[currentIndex];
        array[currentIndex] = array[nextIndex];
        array[nextIndex] = temp;
    }

        void printArray(int [] array){
            
            for(int arr : array){
                System.out.print(arr+" ");
            }
        }