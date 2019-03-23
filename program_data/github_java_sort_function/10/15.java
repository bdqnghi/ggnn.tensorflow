
    public static void sort(int[] arr) {
        int maxVal = getMaxVal(arr);
        int[] bucket = new int[maxVal + 1];

        for (int i = 0; i < bucket.length; i++) {
            bucket[i] = 0;
        }

        for (int i = 0; i < arr.length; i++) {
            bucket[arr[i]]++;
        }

        int outPos = 0;
        for (int i = 0; i < bucket.length; i++) {
            for (int j = 0; j < bucket[i]; j++) {
                arr[outPos++] = i;
            }
        }
    }

    private static int getMaxVal(int[] arr) {
        int maxVal = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > maxVal) {
                maxVal += arr[i];
            }
        }
        return maxVal;
    }