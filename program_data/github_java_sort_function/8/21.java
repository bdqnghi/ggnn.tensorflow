    public static void quicksortKernel (int a[], int left, int right) {


        
        if(a.length == 0) {
            System.out.println("Error: Empty array!");
        }

        if(right > left) {
            int middle = partition(a,left,right);
            quicksortKernel(a,left,middle-1);
            quicksortKernel(a,middle+1,right);
        }
    }

    
    public static void quicksort (int a[]){
        quicksortKernel (a, 0, a.length-1);
    }
