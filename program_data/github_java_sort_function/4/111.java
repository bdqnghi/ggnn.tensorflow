public void buildHeap(T[] arr){
 int c;
   int p;
    for (int i = 1; i < arr.length; i++) {
        c=i;
        while(c>0){
         p=(c-1)/2;
            if (arr[c].compareTo(arr[p])>0) {
                swap(arr,c,p);
            }
            c=p;
               p=(c-1)/2;
        }
        
    }
}
public void swap(T arr[],int f, int l){
 T a = arr[f];
                arr[f] = arr[l];
                arr[l] =a;
}
 public void ReHeap(T[] arr, int L, int U){ 
     while(L<U){
     int left = 2*L +1;
     int right = 2*L +2;
         if (left<=U && right<=U) {
         if (arr[left].compareTo(arr[L])>0 && arr[left].compareTo(arr[L])>0){
             swap(arr,left,L);
             L = left;
         }
         else if (arr[right].compareTo(arr[L])>0 && arr[right].compareTo(arr[L])>0){
             swap(arr,right,L);
         L=right;
         }
         else {}
         }
         else if(left<=U && right>U){
            if (arr[left].compareTo(arr[L])>0) {
             swap(arr,left,L);
         }
            else{
            L=left;
            }
         }
         else{
         L=left;
         }
         
         }
         
         
     }