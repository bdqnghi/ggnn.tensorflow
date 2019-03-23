  public static void sort(Person[] a){
       int[] count = new int[5];
       int[] accum = new int[6];
       int n = a.length;
       Person[] aux = new Person[n];
       for (int i = 0; i < n; i++){
           count[a[i].key]++;
       }
       accum[0] = 0;
       for (int i = 0; i < 5; i++){
           accum[i + 1]  = count[i] + accum[i];

       }
       for (int i = 0; i < n; i++){
           aux[accum[a[i].key]++] = a[i];
       }
       for (int i = 0; i < n; i++){
           a[i] = aux[i];
       }
    }