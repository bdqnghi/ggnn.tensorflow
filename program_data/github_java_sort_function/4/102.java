
   public static void constroi(int tamHeap){
      for(int i = tamHeap; i > 1 && array[i] > array[i/2]; i /= 2){
         swap(i, i/2);
      }
   }

  public static void reconstroi(int tamHeap){
      int i = 1, filho;
      while(i <= (tamHeap/2)){

         if (array[2*i] > array[2*i+1] || 2*i == tamHeap){
            filho = 2*i;
         } else {
            filho = 2*i + 1;
         }

         if(array[i] < array[filho]){
            swap(i, filho);
            i = filho;
         }else{
            i = tamHeap;
         }
      }
   }

    
    public static void heapsort() {
      
      int[] tmp = new int[n+1];
      for(int i = 0; i < n; i++){
         tmp[i+1] = array[i];
      }
      array = tmp;

      
      for(int tamHeap = 2; tamHeap <= n; tamHeap++){
         constroi(tamHeap);
      }

      
      int tamHeap = n;
      while(tamHeap > 1){
         swap(1, tamHeap--);
         reconstroi(tamHeap);
      }

      
      tmp = array;
      array = new int[n];
      for(int i = 0; i < n; i++){
         array[i] = tmp[i+1];
      }
   }