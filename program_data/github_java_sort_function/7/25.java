
    public static void shellSort(int[] arr,int[] deltas){
        for(int delta:deltas){

            for(int i=0;i<arr.length;i+=delta){
                int j=i-delta;
                int tmp=arr[i];
                while(j>=0&& arr[j]>tmp){
                    arr[j+delta]=arr[j];
                    j-=delta;
                }
                arr[j+delta]=tmp;
            }
        }
    }