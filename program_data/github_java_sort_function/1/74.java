    public static void sort(int[] arr){
        for (int j=1;j<arr.length-1;j++){
            int key=arr[j];
            System.out.println("The key is "+key);
            int i=j-1;
            while(i>=0 && arr[i]>key){
                arr[i+1]=arr[i];
                i=i-1;
            }
            arr[i+1]=key;
            show(arr);
        }
    }