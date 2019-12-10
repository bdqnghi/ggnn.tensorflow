/**
 * Sorts x,y pairs of values by the x value.
 * @param count Number of indices, must be even.
 */
private void sort(float[] values, int count) {
    int pointCount = count / 2;
    originalIndices.clear();
    originalIndices.ensureCapacity(pointCount);
    short[] originalIndicesArray = originalIndices.items;
    for (short i = 0; i < pointCount; i++) originalIndicesArray[i] = i;
    int lower = 0;
    int upper = count - 1;
    IntArray stack = quicksortStack;
    stack.add(lower);
    stack.add(upper - 1);
    while (stack.size > 0) {
        upper = stack.pop();
        lower = stack.pop();
        if (upper <= lower)
            continue;
        int i = quicksortPartition(values, lower, upper, originalIndicesArray);
        if (i - lower > upper - i) {
            stack.add(lower);
            stack.add(i - 2);
        }
        stack.add(i + 2);
        stack.add(upper);
        if (upper - i >= i - lower) {
            stack.add(lower);
            stack.add(i - 2);
        }
    }
}
