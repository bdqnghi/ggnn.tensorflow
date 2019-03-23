public void mergeSort(Integer[] arrayToSort, int low, int high) {
        if (high - low <= 1) {
            return;
        }
        int mid = low + (high - low) / 2;
        Integer[] part = new Integer[high - low];
        mergeSort(arrayToSort, low, mid);
        mergeSort(arrayToSort, mid, high);
        merge(arrayToSort, low, mid, high, part);
        
    }
    public Integer[] merge(Integer[] arrayToSort, int low, int mid, int high, Integer[] part) {
        int first = low;
        int second = mid;
        int mergeIndex = 0;
        while (first < mid && second < high) {
            if (arrayToSort[first] <= arrayToSort[second])
            {
                part[mergeIndex] = arrayToSort[first];
                first++;
            } else {
                part[mergeIndex] = arrayToSort[second];
                second++;
            }
            mergeIndex++;
        }
        
        while (first < mid) {
            part[mergeIndex] = arrayToSort[first];
            first++;
            mergeIndex++;
        }
        while (second < high) {
            part[mergeIndex] = arrayToSort[second];
            second++;
            mergeIndex++;
        }
        
        mergeIndex = 0;
        for (int count = low; count < high; count++)
        {
            arrayToSort[count] = part[mergeIndex];
            mergeIndex++;
        }
        return part;
    }