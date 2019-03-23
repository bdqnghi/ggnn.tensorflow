
    private static int[] quicksort(int [] a, int i, int j){
         if (j > i)
          { 
            int p_rand = (int)(Math.random()*(j-i) + i);
            int p = partition(a, i, j, p_rand);
            quicksort(a, i, p-1);
            quicksort(a, p+1, j); 
         }
          return (int[]) a;
    }
    private static int partition(int a[], int start, int end, int pivot)
    {
        int value = a[pivot];
        swap(a,pivot,end);
        int val = start;
        for (int i = start; i < end; i++){
            if ((a[i])<=(value))
            {
                swap(a,i,val);
                val++;
            }   
        }
        swap(a,end,val);
        return val;     
    }
    public static String toString (int [] a){
        String t = "[";
        for (int i=  0; i < a.length; i++)
            t += " " + a[i];
        t += "]";
        return t;
    }
    private static int[] generateArray(int i) {
        
        int [] array = new int[i];
        Random rand = new Random();
        for (int j =0; j<array.length;j++){
            array[j]=rand.nextInt();
        }
        return array;
    }
    public static void quicksort(int[] a){
        a = quicksort(a, 0, a.length -1);
    }
    private static void swap(int [] a, int i, int j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;    
    }