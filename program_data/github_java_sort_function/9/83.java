   public static void sort(int[] data) {
        for (int k = data.length - 1; k > 0; k--) {
            int largestIdx = 0;
            for (int i = 0; i <= k; i++) {
                if (data[i] > data[largestIdx]) {
                    largestIdx = i;
                }
            }
            int tmp = data[k];
            data[k] = data[largestIdx];
            data[largestIdx] = tmp;
        }
    }
