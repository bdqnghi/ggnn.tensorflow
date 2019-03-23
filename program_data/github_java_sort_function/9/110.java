    static void sort(int[] a){
        for(int i = 0; i < a.length - 1; i++){
            int min = a[i];
            int flag = i;
            
            for(int j = i + 1; j < a.length; j++){
                if(a[j] < min){
                    min = a[j];
                    flag = j;
                }
            }
            
            a[flag] = a[i];
            a[i] = min;
        }
        System.out.print("Result:");
        for(int i = 0; i < a.length; i++)
            System.out.print(" " + a[i]);
    }