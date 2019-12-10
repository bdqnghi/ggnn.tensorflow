private int recursiveSelect(int left, int right, int k) {
    if (left == right)
        return left;
    int pivotIndex = medianOfThreePivot(left, right);
    int pivotNewIndex = partition(left, right, pivotIndex);
    int pivotDist = (pivotNewIndex - left) + 1;
    int result;
    if (pivotDist == k) {
        result = pivotNewIndex;
    } else if (k < pivotDist) {
        result = recursiveSelect(left, pivotNewIndex - 1, k);
    } else {
        result = recursiveSelect(pivotNewIndex + 1, right, k - pivotDist);
    }
    return result;
}
