  
    public void sort(int[] a) {
        int i,j,t;
        int vergl = 0;
        int tausch = 0;
        for (i=0; i < a.length-1; i++) {
            Tracer.direct(a, i);
            for(j=i+1; j < a.length; j++) {
                vergl++;
                if (a[i] > a[j]){ 
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                    tausch++;
                }
            }
        }
        
        Tracer.array(a);
        
    }
