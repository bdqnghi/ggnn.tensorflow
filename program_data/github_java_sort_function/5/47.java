static void bubble(int arr[]){
        boolean swapped = true ;
        while(swapped){
            swapped =false;
        for(int i=0;(i<arr.length)&&(i+1<arr.length);i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = true;
            }
        }
        }
    }