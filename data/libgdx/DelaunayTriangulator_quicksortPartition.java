private int quicksortPartition(final float[] values, int lower, int upper, short[] originalIndices) {
    float value = values[lower];
    int up = upper;
    int down = lower + 2;
    float tempValue;
    short tempIndex;
    while (down < up) {
        while (down < up && values[down] <= value) down = down + 2;
        while (values[up] > value) up = up - 2;
        if (down < up) {
            tempValue = values[down];
            values[down] = values[up];
            values[up] = tempValue;
            tempValue = values[down + 1];
            values[down + 1] = values[up + 1];
            values[up + 1] = tempValue;
            tempIndex = originalIndices[down / 2];
            originalIndices[down / 2] = originalIndices[up / 2];
            originalIndices[up / 2] = tempIndex;
        }
    }
    values[lower] = values[up];
    values[up] = value;
    tempValue = values[lower + 1];
    values[lower + 1] = values[up + 1];
    values[up + 1] = tempValue;
    tempIndex = originalIndices[lower / 2];
    originalIndices[lower / 2] = originalIndices[up / 2];
    originalIndices[up / 2] = tempIndex;
    return up;
}
