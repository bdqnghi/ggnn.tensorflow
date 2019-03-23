 public static void sort(int[] a, int M) {
        int N = a.length;
        int min = a[0], max = a[0];
        for (int value : a) {
            if (value < min) {
                min = value;
                continue;
            }
            if (value > max) {
                max = value;
            }
        }
        int d = (max - min) / M;
        List[] buckets = new List[M + 1];
        for (List bucket : buckets) {
            bucket = new ArrayList();
        }
        for (int value : a) {
            List bucket = buckets[(value - min) / d];
            bucket.add(value);
        }
        for (List bucket : buckets) {
            if (bucket.size() != 0)
                bucket.sort(new IntegerComparator());
        }
        int k = 0;
        for (List bucket : buckets) {
            for (Object value : bucket) {
                a[k++] = (int) value;
            }
        }