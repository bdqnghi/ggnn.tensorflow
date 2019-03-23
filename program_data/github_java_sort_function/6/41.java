
public class RadixSort{
    public int getMax(int[] arr){
        int max = arr[0];
        for(int i = 0; i < arr.length; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
    public void countSort(int[] arr, int n, int exp){
        int[] count = new int[n];
        int[] output = new int[arr.length];
        for(int i = 0; i < arr.length; i++){
            count[(arr[i]/exp)%n] ++;
        }
        for(int i = 1; i < n; i++){
            count[i] += count[i-1];
        }
        for(int i = arr.length - 1; i >= 0; i--){
            output[count[(arr[i]/exp)%n] - 1] = arr[i];
            count[(arr[i]/exp)%n] --;
        }
        for(int i = 0; i < arr.length; i++){
            arr[i] = output[i];
        }
    }
    public void radixSort(int[] arr){
        int max = getMax(arr);
        for(int exp = 1; max/exp > 0; exp *= arr.length){
            countSort(arr, arr.length, exp);
        }
    }

}