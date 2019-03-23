  public int[] sorter(int[] array) {
        if (array.length <= 1) {
            return array;
        }
        int[] left = new int[array.length / 2];
        int[] right = new int[array.length - left.length];
        System.arraycopy(array, 0, left, 0, left.length);
        System.arraycopy(array, left.length, right, 0, right.length);

        sorter(left);
        sorter(right);
        merge(left, right, array);
        return array;


    }

    private static void merge(int[] left, int[] right, int[] array) {
        int firstIndex = 0;
        int secondIndex = 0;
        int union = 0;

        while (firstIndex < left.length && secondIndex < right.length) {
            if (left[firstIndex] <= right[secondIndex]) {
                array[union] = left[firstIndex];
                firstIndex++;
            } else {
                array[union] = right[secondIndex];
                secondIndex++;
            }
            union++;
        }

        System.arraycopy(left, firstIndex, array, union, left.length - firstIndex);
        System.arraycopy(right, secondIndex, array, union, right.length - secondIndex);
    }