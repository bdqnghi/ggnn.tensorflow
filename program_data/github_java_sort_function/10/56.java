public static void bucketSort(int[] arr) {
      int maxValue = arr[0];
      for (int i = 1; i < arr.length; i++) {
          if (arr[i] > maxValue) {
              maxValue = arr[i];
          }
      }
  
      int [] bucket=new int[maxValue+1];
 
      for (int i=0; i<bucket.length; i++) {
         bucket[i]=0;
      }
 
      for (int i=0; i<arr.length; i++) {
         bucket[arr[i]]++;
      }
 
      int pos=0;
      for (int i=0; i<bucket.length; i++) {
         for (int j=0; j<bucket[i]; j++) {
            arr[pos++]=i;
         }
      }
   }
}