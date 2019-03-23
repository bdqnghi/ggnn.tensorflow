 public void run() {
        sortq(0, data.size() - 1);
    }



   private void sortq(int l, int r) {
        Comparable pivot = data.get((l + r) / 2);
        int i = l;
        int j = r;
        while (i <= j) {
            while (data.get(i).compareTo(pivot) < 0) i++;
            while (data.get(j).compareTo(pivot) > 0) j--;
            if (i <= j) {
                Collections.swap(data, i, j);
                i++;
                j--;
            }
        }
        if (l < j) sortq(l, j);
        if (i < r) sortq(i, r);
   }