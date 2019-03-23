public static void sort(int[] array) {
        Mergesort.array = array;
        int[] tempArray = new int[array.length];
        mergeSort(tempArray, 0, array.length - 1);
    }

    public static void mergeSort(int[] tempArray, int lowerIndex, int upperIndex) {
        if (lowerIndex == upperIndex) {
            return;
        } else {
            int mid = (lowerIndex + upperIndex) / 2;
            mergeSort(tempArray, lowerIndex, mid);
            mergeSort(tempArray, mid + 1, upperIndex);
            merge(tempArray, lowerIndex, mid + 1, upperIndex);
        }
    }

    public static void merge(int[] tempArray, int lowerIndexCursor,
            int higerIndex, int upperIndex) {
        int tempIndex = 0;
        int lowerIndex = lowerIndexCursor;
        int midIndex = higerIndex - 1;
        int totalItems = upperIndex - lowerIndex + 1;
        while (lowerIndex <= midIndex && higerIndex <= upperIndex) {
            setEquations(getEquations()+1);
            if (getArray()[lowerIndex] < getArray()[higerIndex]) {
                setSwaps(getSwaps()+1);
                tempArray[tempIndex++] = getArray()[lowerIndex++];
            } else {
                setSwaps(getSwaps()+1);
                tempArray[tempIndex++] = getArray()[higerIndex++];
            }
        }

        while (lowerIndex <= midIndex) {
            setEquations(getEquations()+1);
            setSwaps(getSwaps()+1);
            tempArray[tempIndex++] = getArray()[lowerIndex++];
        }

        while (higerIndex <= upperIndex) {
            setEquations(getEquations()+1);
            setSwaps(getSwaps()+1);
            tempArray[tempIndex++] = getArray()[higerIndex++];
        }

        for (int i = 0; i < totalItems; i++) {
            setEquations(getEquations()+1);
            setSwaps(getSwaps()+1);
            getArray()[lowerIndexCursor + i] = tempArray[i];
        }
    }