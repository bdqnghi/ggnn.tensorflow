
  public static void mergeSort(int[] array, int Start, int End){
    if(Start < End){
      int Middle = Start + (End - Start) / 2;
      mergeSort(array, Start, Middle);
      mergeSort(array, Middle + 1, End);
      merge(array, Start, Middle, End);
      }
    }








  public static void merge(int[] insArray, int Start, int Middle, int End){
    int[] Sn1 = new int[Middle - Start + 1];
    int[] Sn2 = new int[End - Middle];
      for(int i= 0; i<Sn1.length; i++){
    Sn1[i]=insArray[Start + i];
    }
      for(int j= 0; j<Sn2.length; j++){
    Sn2[j]=insArray[Middle + 1 + j];
    }

    int i = 0;
    int j = 0;
    
    for(int k = Start; k <  End + 1; k++){
     if(i == Sn1.length){
         insArray[k] = Sn2[j];
         j = j + 1;
         }
     else if(j == Sn2.length){
         insArray[k] = Sn1[i];
         i = i + 1;
         }
     else if(Sn1[i] <= Sn2[j]){
    insArray[k] = Sn1[i];
    i = i + 1;
    }
      else{
    insArray[k] = Sn2[j];
    j = j + 1;
    }
    }