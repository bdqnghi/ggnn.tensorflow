public List<Integer> sort(List<Integer> list) {

        int high = list.get(0);
        int low = list.get(0);
        
        for (int i = 1; i < list.size(); i++) {
            if (list.get(i) > high)
                high = list.get(i);
            if (list.get(i) < low)
                low = list.get(i);
        }
        
        double interval = ((double) (high - low + 1)) / BUCKET_COUNT;
        
        for (int i = 0; i < BUCKET_COUNT; i++) {
            buckets[i] = new ArrayList<Integer>();
        }
        
        for (int i = 0; i < list.size(); i++) {
            buckets[(int) ((list.get(i) - low) / interval)].add(list.get(i));
        }
        
        ArrayList<Integer> sortedList = new ArrayList<Integer>();
        for (int i = 0; i < BUCKET_COUNT; i++) {
            
            buckets[i] = ms.sort(buckets[i]);
            
            for (int j = 0; j < buckets[i].size(); j++) {
                sortedList.add(buckets[i].get(j));
            }
        }

        return sortedList;
    }
