private int quicksortPartitionWithIndices(final float[] values, int lower, int upper, boolean yDown, short[] originalIndices) {
    float x = values[lower];
    float y = values[lower + 1];
    int up = upper;
    int down = lower;
    float temp;
    short tempIndex;
    while (down < up) {
        while (down < up && values[down] <= x) down = down + 2;
        if (yDown) {
            while (values[up] > x || (values[up] == x && values[up + 1] < y)) up = up - 2;
        } else {
            while (values[up] > x || (values[up] == x && values[up + 1] > y)) up = up - 2;
        }
        if (down < up) {
            temp = values[down];
            values[down] = values[up];
            values[up] = temp;
            temp = values[down + 1];
            values[down + 1] = values[up + 1];
            values[up + 1] = temp;
            tempIndex = originalIndices[down / 2];
            originalIndices[down / 2] = originalIndices[up / 2];
            originalIndices[up / 2] = tempIndex;
        }
    }
    values[lower] = values[up];
    values[up] = x;
    values[lower + 1] = values[up + 1];
    values[up + 1] = y;
    tempIndex = originalIndices[lower / 2];
    originalIndices[lower / 2] = originalIndices[up / 2];
    originalIndices[up / 2] = tempIndex;
    return up;
}
