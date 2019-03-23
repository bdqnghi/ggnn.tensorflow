public static void bucketSort(double[] array){
        @SuppressWarnings("unchecked")
        ArrayList<Double>[] buckets = new ArrayList[10];
        
        for(int i=0; i<10 ;i++){
            buckets[i] = new ArrayList<Double>();
        }
        
        for(int i=0; i<array.length; i++){
            int index = (int)array[i]*10;
            buckets[index].add(array[i]);
        }
        
        for(int i=0; i<10; i++){
            Collections.sort(buckets[i]);
        }
        
        int index = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<buckets[i].size(); j++){
                array[index++] = buckets[i].get(j);
            }
        }
    }
}