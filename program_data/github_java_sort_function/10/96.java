
    public void sort(int[] values) {
        
        List<List<Integer>> buckets = new ArrayList<List<Integer>>();
        
        for (int value : values) {
            int bucket = value / bucketSize;
            if (buckets.size() <= bucket) {
                for (int size = buckets.size();size <= bucket;size++) {
                    buckets.add(null);
                }
            }
            List<Integer> mybuckets = buckets.get(bucket);
            if (mybuckets == null) {
                mybuckets = new ArrayList<Integer>();
                buckets.set(bucket, mybuckets);
            }
            mybuckets.add(value);
        }
        
        int i = 0;
        for (List<Integer> bucket : buckets) {
            if (bucket == null) {
                continue;
            }
            
            if (bucket.size() == 1) {
                values[i++] = bucket.get(0);
            } else {
                int[] myvalues = new int[bucket.size()];
                for (int j = 0;j<bucket.size();j++) {
                    myvalues[j] = bucket.get(j);
                }
                
                sort.sort(myvalues);
                for (int j = 0;j<bucket.size();j++) {
                    values[i++] = myvalues[j];
                }
            }
        }
    }
