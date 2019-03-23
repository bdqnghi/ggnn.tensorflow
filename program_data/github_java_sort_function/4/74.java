package sort.heapify;



public abstract class HeapSort {



    static int heapSize = 0;
    
    
    
    
    
    
    
    

    public static void sort(int[] arr){

        buildMaxHeap(arr);
        print(arr);

        for(int i=arr.length-1;i>0;i--){
            int temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
            heapSize--;
            maxHeapify(arr,0);
        }
    }
    
    static void buildMaxHeap(int[] arr){
        heapSize = arr.length;
        
        for(int i=arr.length/2;i>=0;i--){
            maxHeapify(arr,i);
        }

        
      
    }


    static void maxHeapify(int[] arr,int i){

        int largest = 0;
        int left = (i<<1)+1;
        int right = left+1;

        if(left<heapSize && arr[left]>arr[i]){
            largest = left;
        }else{
            largest = i;
        }

        if(right<heapSize && arr[right]>arr[largest]){
            largest = right;
        }


        if(largest!=i){
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;
            maxHeapify(arr,largest);
        }

    }
}
