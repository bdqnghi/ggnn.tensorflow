    public static  int[] bucketSort(int[] num){
        if(num.length < 2) return num;
        
        int low =num[0];
        int high = num[0];
        for(int i = 0; i< num.length; i++){
            if(num[i] < low) low = num[i];
            if(num[i] > high) high = num[i];
        }
        
        Double interval = (double) ((high - low)/(num.length-1));
        int bucketCount = (int) ((high - low) / interval + 1);
        ArrayList<Integer> buckets [] =  new ArrayList[bucketCount];
        for(int i=0;i<bucketCount;i++){
            buckets[i] = new ArrayList<Integer>();
        }
        for(int i = 0; i < num.length; i++){
            buckets[(int) ((num[i] - low)/interval)].add(num[i]);
        }
        int pointer = 0;
        for(int i = 0; i < bucketCount; i++){
            Collections.sort(buckets[i]);
            for(int j = 0;j < buckets[i].size(); j++){
                num[pointer++] = buckets[i].get(j);
            }
        }
        return num;
    }