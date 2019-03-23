    public void sort(int[] array) {
        int gap = array.length;
        boolean sorted = false;
        while (!sorted) {
            gap = (int) (gap / shrink);
            if (gap > 1) {
                sorted = false;
            } else {
                gap = 1;
                sorted = true;
            }
            int i = 0;
            while (i + gap < array.length) {
                if (array[i] > array[i + gap]) {
                    ArrayHelper.swap(array, i, i + gap);
                    sorted = false;
                }
                i++;
            }
        }
    }