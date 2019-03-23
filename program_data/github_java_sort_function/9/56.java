public static int[] sortiereIterativ(int[] a) {
        
        int i = 0;
        int position = 0;
        
        for (int sortiert = 0; sortiert < a.length; sortiert++) {
            
            
            i = sortiert;
            position = sortiert;
            
            
            while (i < a.length) {
                if (a[i] < a[position]) position = i;
                i++;
            }
            
            
            a[0] = a[sortiert];
            a[sortiert] = a[position];
            a[position] = a[0]; 
        }
        
        a[0] = -1;
        
        return a;
    }