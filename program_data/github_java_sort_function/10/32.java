public static int[] bucketSort(int[] arr) {                 
  int i, j, terbesar = 0;int[] ember = new int [50];
                                        
  for(i = 0; i < arr.length; i++ ) {        
   if(terbesar < arr[i]){               
    terbesar = arr[i];                  
    }   
  } 
  for(i = 0; i < arr.length; i++ ) {    
       ember[arr[i]]++;             
    } 
  for (i = 0, j = 0; i < ember.length; i++) {  
   for (; ember[i] > 0; (ember[i])--) { 
    arr[j] = i;         
    j++;                
              }
         } 
  return arr;                               
 }
 
 