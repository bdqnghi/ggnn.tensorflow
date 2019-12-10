private int quicksortPartition(final float[] values, int lower, int upper) {
    float x = values[lower];
    float y = values[lower + 1];
    int up = upper;
    int down = lower;
    float temp;
    short tempIndex;
    while (down < up) {
        while (down < up && values[down] <= x) down = down + 2;
        while (values[up] > x || (values[up] == x && values[up + 1] < y)) up = up - 2;
        if (down < up) {
            temp = values[down];
            values[down] = values[up];
            values[up] = temp;
            temp = values[down + 1];
            values[down + 1] = values[up + 1];
            values[up + 1] = temp;
        }
    }
    values[lower] = values[up];
    values[up] = x;
    values[lower + 1] = values[up + 1];
    values[up + 1] = y;
    return up;
}
