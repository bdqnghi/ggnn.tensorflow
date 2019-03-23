  public void sort(int[] array) {
        int gap = array.length / shrink;
        while (gap > 0) {
            for (int i = 0; i < gap; i++) {
                insertionSortWithGap(array, gap, i);
            }
            gap /= shrink;
        }
    }

    private void insertionSortWithGap(int[] array, int gap, int startIndex) {
        for (int i = startIndex + gap; i < array.length; i += gap) {
            int cur = array[i];
            boolean flag = false;
            for (int j = i - gap; j >= 0; j -= gap) {
                if (cur < array[j]) {
                    array[j + gap] = array[j];
                } else {
                    array[j + gap] = cur;
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                array[startIndex] = cur;
            }
        }
    }