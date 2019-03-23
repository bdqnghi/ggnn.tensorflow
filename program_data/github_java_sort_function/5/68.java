public void sort(int []arr){
        for(int i = 0; i < arr.length;i++){
            for(int j = 1 ; j < arr.length;j++){
                if(arr[j-1] > arr[j]){
                    int temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        
    }
    