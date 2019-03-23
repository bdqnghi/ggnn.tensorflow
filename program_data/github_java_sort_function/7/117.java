
    public static void shellSortOptim(int[] data) {
        int step = data.length / ITERATION_COEFFICIENT;
        for (; step >= 1; step /= ITERATION_COEFFICIENT) {
            for (int i = step; i < data.length; i++) {
                int tmp = data[i];
                int k = i - step;
                if (data[i] >= data[k]) {
                    continue;
                }
                for (; k >= 0 && data[k] > tmp; k -= step) {
                    data[k + step] = data[k];
                }
                data[k + step] = tmp;
            }
        }

    }