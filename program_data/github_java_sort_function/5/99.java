public void Bubble(T arr[]){
    for (int out = arr.length-1; out > 1; out--) {
        for (int in = 0; in < out; in++) {
            if (arr[in].compareTo(arr[in+1])>0) {
                Swap(in,in+1);
            }
        }
    }



}
public void Swap(int a, int b){
T temp = arr[a];
arr[a]= arr[b];
arr[b]= temp;
}