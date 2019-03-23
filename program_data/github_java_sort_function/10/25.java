public void sort(double a[]){
        
        if(a.length<=1) return;
        ArrayList<Double> temp[] = new ArrayList[bucketNum];
        
        for(int i = 0;i < a.length;i++){
            int ttemp = (int)Math.floor(bucketNum*a[i]);
            if(temp[ttemp]==null) temp[ttemp] = new ArrayList<Double>();
            temp[ttemp].add(a[i]);
        }
        
        int pos = 0;
        for(int i=0;i<temp.length;i++){
            if(temp[i]!=null){
                Collections.sort(temp[i]);
                for(double x:temp[i]) a[pos++] = x;
            }
        }   
    }