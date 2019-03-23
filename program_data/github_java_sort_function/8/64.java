  public static void sort(int[] integers) {
        Checker.isNotNull(integers);

        sort(integers, 0, integers.length - 1);

        Printer.print(NAME, integers);
    }

    private static void sort(int[] data, int lo, int hi) {
        if (lo >= hi) {
            return;
        }

        int partition = partition(data, lo, hi);

        sort(data, lo, partition - 1);
        sort(data, partition + 1, hi);
    }

    private static int partition(int[] data, int lo, int hi) {
        int left = lo;
        int right = hi + 1;
        int pivot = data[lo];

        while (true) {
            while (data[++left] < pivot) {
                if (left == hi) {
                    break;
                }
            }
            while (data[--right] > pivot) {
                if (right == lo) {
                    break;
                }
            }
            if (left >= right) {
                break;
            }
            ArrayHelper.swap(data, left, right);
        }

        ArrayHelper.swap(data, lo, right);

        return right;
    }