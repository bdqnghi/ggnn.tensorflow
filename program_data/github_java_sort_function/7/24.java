  public static void shellsort(){
       int interval=3;
      while(interval>0){ 
       for(int i=0;i<ar.length;i++){
           for(int j=interval;j<ar.length;j=j+interval){
               if(ar[i]<ar[j]){
                   int temp=ar[i];
                   ar[i]=ar[j];
                   ar[j]=temp;
               }
           }
       }
       interval=interval-1;
    }}