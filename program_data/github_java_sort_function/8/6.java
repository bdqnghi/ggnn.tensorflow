    private static void nonRecursiveQuickSort(Comparable[] array) {
        StdRandom.shuffle(array);
        quickSort(array, 0, array.length - 1);
    }

    private static void quickSort(Comparable[] array, int low, int high) {

        Stack<QuickSortRange> stack = new Stack<>();

        QuickSortRange quickSortRange = new QuickSortRange(low, high);
        stack.push(quickSortRange);

        while (stack.size() > 0) {
            QuickSortRange currentQuickSortRange = stack.pop();

            int partition = partition(array, currentQuickSortRange.low, currentQuickSortRange.high);
            QuickSortRange leftQuickSortRange = new QuickSortRange(currentQuickSortRange.low, partition - 1);
            QuickSortRange rightQuickSortRange = new QuickSortRange(partition + 1, currentQuickSortRange.high);

            
            int leftSubArraySize = partition - currentQuickSortRange.low;
            int rightSubArraySize = currentQuickSortRange.high - partition + 2;

            
            if (leftSubArraySize > rightSubArraySize) {
                if (leftSubArraySize > 1 && leftQuickSortRange.low < leftQuickSortRange.high) {
                    stack.push(leftQuickSortRange);
                }

                if (rightSubArraySize > 1 && rightQuickSortRange.low < rightQuickSortRange.high) {
                    stack.push(rightQuickSortRange);
                }
            } else {
                if (rightSubArraySize > 1 && rightQuickSortRange.low < rightQuickSortRange.high) {
                    stack.push(rightQuickSortRange);
                }

                if (leftSubArraySize > 1 && leftQuickSortRange.low < leftQuickSortRange.high) {
                    stack.push(leftQuickSortRange);
                }
            }
        }
    }

    private static int partition(Comparable[] array, int low, int high) {
        Comparable pivot = array[low];

        int i = low;
        int j = high + 1;

        while(true) {
            while (ArrayUtil.less(array[++i], pivot)) {
                if (i == high) {
                    break;
                }
            }

            while(ArrayUtil.less(pivot, array[--j])) {
                if (j == low) {
                    break;
                }
            }

            if (i >= j) {
                break;
            }

            ArrayUtil.exchange(array, i, j);
        }

        
        ArrayUtil.exchange(array, low, j);
        return j;
    }
