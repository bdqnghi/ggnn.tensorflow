  void ssort(int a[]){
    for(int i=0; i<a.length-1;i++){
      int min_index=i;
      for(int j=i+1; j<a.length;j++){
        if(a[j]<a[min_index])
        min_index=j;
      }
      int temp=a[min_index];
      a[min_index]=a[i];
      a[i]=temp;
    }
  }
