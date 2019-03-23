class InsertionSort{
  int[] Ar;
  InsertionSort(int[] a){
    Ar = a;
  }
  void sort(){
    for(int i = 1; i<Ar.length; i++){
      int j = i-1;
      int temp = Ar[i];
      while(j>=0 && temp<Ar[j]){
        Ar[j+1] = Ar[j];
        j--;
      }
      Ar[j+1] = temp;
    }
  }
}