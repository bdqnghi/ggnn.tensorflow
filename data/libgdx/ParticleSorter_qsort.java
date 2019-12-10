public void qsort(int si, int ei) {
    // base case
    if (si < ei) {
        float tmp;
        int tmpIndex, particlesPivotIndex;
        // insertion
        if (ei - si <= 8) {
            for (int i = si; i <= ei; i++) for (int j = i; j > si && distances[j - 1] > distances[j]; j--) {
                tmp = distances[j];
                distances[j] = distances[j - 1];
                distances[j - 1] = tmp;
                // Swap indices
                tmpIndex = particleIndices[j];
                particleIndices[j] = particleIndices[j - 1];
                particleIndices[j - 1] = tmpIndex;
            }
            return;
        }
        // Quick
        float pivot = distances[si];
        int i = si + 1;
        particlesPivotIndex = particleIndices[si];
        // partition array
        for (int j = si + 1; j <= ei; j++) {
            if (pivot > distances[j]) {
                if (j > i) {
                    // Swap distances
                    tmp = distances[j];
                    distances[j] = distances[i];
                    distances[i] = tmp;
                    // Swap indices
                    tmpIndex = particleIndices[j];
                    particleIndices[j] = particleIndices[i];
                    particleIndices[i] = tmpIndex;
                }
                i++;
            }
        }
        // put pivot in right position
        distances[si] = distances[i - 1];
        distances[i - 1] = pivot;
        particleIndices[si] = particleIndices[i - 1];
        particleIndices[i - 1] = particlesPivotIndex;
        // call qsort on right and left sides of pivot
        qsort(si, i - 2);
        qsort(i, ei);
    }
}
