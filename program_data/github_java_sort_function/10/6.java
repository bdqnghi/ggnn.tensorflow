 public static int[] bucketsort(int[] vec , int nBuckets){
        
        int [] sortedVec = new int[vec.length];

        
        ArrayList<ArrayDeque<Integer>> buckets = new ArrayList<ArrayDeque<Integer>>(nBuckets);
        for(int i = 0; i < nBuckets; i++ ){
            buckets.add(new ArrayDeque<Integer>() );
        }

        
        for(Integer x: vec){
            buckets.get( chooseBucket(x, nBuckets) ).push(x);
        }

        
        int idx = 0;
        for(ArrayDeque<Integer> bucket: buckets){
            while( ! bucket.isEmpty() )
                sortedVec[idx++] = bucket.remove();
        }
        
        inplace_insertionSort(sortedVec);

        return sortedVec;
    }