 public static void bucketSort(int[] a, int bucketSize) {
        if (a.length == 0) {
            return;
        }

        
        int maxValue = a[0];
        int minValue = a[0];
        for (int i = 0; i < a.length; i++) {
            if (a[i] > maxValue) {
                maxValue = a[i];
            }
            if (a[i] < minValue) {
                minValue = a[i];
            }
        }

        
        int noOfBuckets = (maxValue - minValue) / bucketSize + 1;
        List<List<Integer>> buckets = new ArrayList<>(noOfBuckets);
        for (int i = 0; i < noOfBuckets; i++) {
            buckets.add(new ArrayList<>());
        }

        
        for (int i = 0; i < a.length; i++) {
            buckets.get((a[i] - minValue) / bucketSize).add(a[i]);
        }

        
        int index = 0;
        for (int i = 0; i < buckets.size(); i++) {
            Integer[] bucketArray = new Integer[buckets.get(i).size()];
            bucketArray = buckets.get(i).toArray(bucketArray);
            Arrays.sort(bucketArray);
            for (Integer elem : bucketArray) {
                a[index++] = elem;
            }
        }
    }