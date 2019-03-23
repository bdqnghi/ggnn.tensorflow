 void Selection (T arr[]){
     for (int out = 0; out < arr.length; out++) {
         int min = out;
         for (int in = out; in < arr.length; in++) {
             if (arr[in].compareTo(arr[min])<0) {
                 min=in;
             }
         }
         Swap(min,out);
     }
 
 }   
    
    
  public void Swap(int a, int b){
T temp = arr[a];
arr[a]= arr[b];
arr[b]= temp;
}  
    