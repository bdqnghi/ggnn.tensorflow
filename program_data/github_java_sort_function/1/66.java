void Insertion(T arr[]){
    for (int out = 1; out < arr.length; out++) {
       T key = arr[out];
       int j = out-1;
       while(j>=0 && key.compareTo(arr[j])<0 ){
           Swap(j,j+1);
           j--;
       }
    }


} 
    
    
  public void Swap(int a, int b){
T temp = arr[a];
arr[a]= arr[b];
arr[b]= temp;
} 