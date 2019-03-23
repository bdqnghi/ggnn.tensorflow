
 
    public static int[] merge_sort(int arr[]){
      if(arr.length <= 1) return arr;
      
      int middle = arr.length / 2;
      int leftArray[] = new int[middle];
      int rightArray[] = new int [arr.length - middle];
      
      
      for(int i = 0; i < middle; i++)
        leftArray[i] = arr[i];
      
      
      int rIndex = 0;
      for(int j = middle; j < arr.length; j++)
       rightArray[rIndex++] = arr[j];
      
      
      leftArray = merge_sort(leftArray);
      rightArray = merge_sort(rightArray);
      
      
      return  merge(leftArray, rightArray);
      
    }
    
    public static int[] merge(int left[],int right[]){
      int result[]  = new int[left.length + right.length];
      int lIndex = 0;
      int rIndex = 0;
      int resultIndex = 0;
      
      while(lIndex < left.length || rIndex < right.length){
      
        
          if(lIndex < left.length && rIndex < right.length){
            if(left[lIndex] <= right[rIndex])
              result[resultIndex++] = left[lIndex++];
            else  
              result[resultIndex++] = right[rIndex++]; 
        
          }else{
         
         
          if(lIndex < left.length)    
          result[resultIndex++] = left[lIndex++];
         
         
          if(rIndex < right.length)
          result[resultIndex++] = right[rIndex++];
        }
      }
      return result;
    }

