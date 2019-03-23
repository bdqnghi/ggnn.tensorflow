 public void sort(final int array[]) {
        if (array.length == 0) {
            return;
        }

        final int bucketSize = DEFAULT_BUCKET_SIZE;
        int min = array[0];
        int max = array[0];
        for (int i = 0; i < array.length; i++) {
            if (array[i] < min) {
                min = array[i];
            } else if (array[i] > max) {
                max = array[i];
            }
        }

        final int bucketCount = (max - min) / bucketSize + 1;
        final List<List<Integer>> buckets = new ArrayList<>();
        for (int i = 0; i < bucketCount; i++) {
            buckets.add(new ArrayList<Integer>());
        }

        for (int i = 0; i < array.length; i++) {
            buckets.get(Math.abs((min - array[i]) / bucketSize)).add(array[i]);
        }

        int index = 0;
        for (int i = 0; i < bucketCount; i++) {
            final List<Integer> bucket = buckets.get(i);
            final int[] elements = ArrayUtils.toPrimitive(bucket.toArray(new Integer[0]));
            new InsertionSort().sort(elements);
            for (int j = 0; j < elements.length; j++) {
                array[index++] = elements[j];
            }
        }
    }