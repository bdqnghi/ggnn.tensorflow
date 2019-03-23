
    public static int[] sortiereIterativ(int[] a){
        for(int sortiert = 0; sortiert < a.length; sortiert++) {
            int i = 1;
        
            
            while (a[i] < a[sortiert]) i++;
            
            
            while (i < sortiert) {
                a[0] = a[i];
                a[i] = a[sortiert];
                a[sortiert] = a[0];
                i++;
            }
            
            a[0] = -1;
        }
        return a;
    }