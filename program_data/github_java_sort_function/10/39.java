    
    public void createBuckets(int n) {
        bucket = new ArrayList<ArrayList<Double>>();
        for (int k = 0; k < n; k++) {
            bucket.add(new ArrayList<Double>());
        }
        double nd = n;
        double range = 1 / nd;
        for (int i = 0; i < n; i++) {
            int idx = (int) ((Math.ceil((this.input.get(i) / range)) - 1));
            int curSize = bucket.get(idx).size();
            if (curSize == 0) {
                bucket.get(idx).add(this.input.get(i));
            } else {
                bucket.get(idx).add(this.input.get(i));
                QuickSort qSorter = new QuickSort();
                qSorter.input = bucket.get(idx);
                qSorter.sort(0, qSorter.input.size() - 1);
            }

        }

    }
