static int limitCapacity(int capacity, int maxCount) {
    return maxCount != 0 && capacity > maxCount ? maxCount : capacity;
}
