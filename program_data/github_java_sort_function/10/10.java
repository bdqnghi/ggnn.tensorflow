 public static void bucketSort(int[] a) {
        int n = a.length;
        
        List<List<Integer>> bucket = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            bucket.add(new ArrayList<>());
        }

        
        for (int i = 0; i < n; i++) {
            bucket.get(f(i)).add(a[i]);
        }

        
        for (int i = 0; i < bucket.size(); i++) {
            if (!bucket.get(i).isEmpty())
                Collections.sort(bucket.get(i)); 
        }

        
        int k = 0;
        for (int i = 0; i < bucket.size(); i++) {
            for (int item : bucket.get(i)) {
                a[k++] = item;
            }
        }
    }