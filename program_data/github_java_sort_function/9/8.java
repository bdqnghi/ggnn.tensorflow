public static void selection_sort(int[]arr,int bi,int ei){
        if (bi==arr.length-1){
            return;
        }
        if (ei==arr.length){
            selection_sort(arr,bi+1,bi+2);
            return;
        }
        if (arr[bi]>arr[ei]){
            int temp = arr[bi];
            arr[bi] = arr[ei];
            arr[ei] = temp;
        
        }
        selection_sort(arr,bi,ei+1);
    }
    public static void display(int[] arr) {
        for (int val : arr) {
            
            System.out.print(val + ",");
        }
        System.out.println("end");
    }