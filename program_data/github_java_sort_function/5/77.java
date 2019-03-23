    public static int [] bubbleSort(int arr[]){
        
        int n = arr.length;
        for(int i= n-2 ; i >=0 ; i-- ){
            for(int j = 0 ; j <= i ; j ++){
                
                if(arr[j] > arr[j+1]) 
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        
        return arr ;
    }
    