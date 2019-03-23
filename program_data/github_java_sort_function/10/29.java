public static void bucketSort(DataWrap[] data, int min, int max) {
        System.out.println("开始排序");
        int arrayLength = data.length;
        DataWrap[] temp = new DataWrap[arrayLength];
        int[] buckets = new int[max - min];
        for (int i = 0; i < arrayLength; i++) {
            buckets[data[i].data - min]++;
        }
        System.out.println(Arrays.toString(buckets));
        for (int i = 1; i < max - min; i++) {
            buckets[i] = buckets[i] + buckets[i - 1];
        }
        System.out.println(Arrays.toString(buckets));
        System.arraycopy(data, 0, temp, 0, arrayLength);
        for (int k = arrayLength - 1; k >= 0; k--) {
            data[--buckets[temp[k].data - min]] = temp[k];
        }
    }
