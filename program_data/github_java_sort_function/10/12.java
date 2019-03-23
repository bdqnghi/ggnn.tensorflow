public static void sort(int[] a) {
        int maxVal = 0;
        for (int i = 0; i < a.length; i++) {
            if (maxVal < a[i]) {
                maxVal = a[i];
            }
        }
        
        int[] buckets = new int[maxVal + 1];
        for (int i = 0; i < a.length; i++) {
            buckets[a[i]]++;
        }

        int outPos = 0;
        for (int i=0; i<buckets.length; i++) {
            for (int j=0; j<buckets[i]; j++) {
                a[outPos] = i;
                outPos++;
            }
        }
    }

    