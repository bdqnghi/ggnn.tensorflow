
    public void mergeSort() {
        long [] workArray = new long[nElems];
        reMergeSort(workArray,0,nElems-1);
    }

    private void reMergeSort(long[] workArray, int lowerBound, int upperBound) {
        if (lowerBound == upperBound)
            return;
        else {
            int mid = (lowerBound + upperBound)/2;
            reMergeSort(workArray, lowerBound, mid);
            reMergeSort(workArray, mid+1, upperBound);
            merge(workArray, lowerBound, mid+1, upperBound);
        }
    }

    private void merge(long[] workArray, int lowerBound, int highPatr, int upperBound) {

        int j = 0;
        int mid = highPatr-1;
        int low = lowerBound;
        int n = upperBound - lowerBound + 1;

        while (lowerBound <= mid && highPatr <= upperBound) {
            if (theArray[lowerBound] < theArray[highPatr])
                workArray[j++] = theArray[lowerBound++];
            else
                workArray[j++] = theArray[highPatr++];
        }

        while (lowerBound <= mid)
            workArray[j++] = theArray[lowerBound++];

        while (highPatr <= upperBound)
            workArray[j++] = theArray[highPatr++];

        for (j = 0; j < n; j++) {
            theArray[low+j] = workArray[j];
        }

    }