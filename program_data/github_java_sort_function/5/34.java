  public static void sort(int[] data) {
        for (int k = data.length - 1; k > 0; k--) {
            for (int i = 0; i < k; i++) {
                if (data[i] > data[i + 1]) {
                    int tmp = data[i];
                    data[i] = data[i + 1];
                    data[i + 1] = tmp;
                }
            }
        }
    }