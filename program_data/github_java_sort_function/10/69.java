













public void bucketsort(int array[], int N) {
    if( N <= 0 )
      return;                                   

    int min = array[0];
    int max = min;
    for( int i = 1; i < N; i++ )                
      if( array[i] > max )
        max = array[i];
      else if( array[i] < min )
        min = array[i];

    int bucket[] = new int[max-min+1];          
    
    for( int i = 0; i < N; i++ )                
      bucket[array[i]-min]++;                   

    int i = 0;                                  
    for( int b = 0; b < bucket.length; b++ )    
      for( int j = 0; j < bucket[b]; j++ )      
        array[i++] = b + min;                     
}

public static void sort(int[] a, int maxVal) {
    int [] bucket=new int[maxVal+1];
 
    for (int i=0; i<bucket.length; i++) {
         bucket[i]=0;
    }
 
    for (int i=0; i<a.length; i++) {
         bucket[a[i]]++;
    }
 
    int outPos=0;
    for (int i=0; i<bucket.length; i++) {
        for (int j=0; j<bucket[i]; j++) {
           a[outPos++]=i;
        }
    }
}










