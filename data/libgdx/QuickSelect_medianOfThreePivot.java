/**
 * Median of Three has the potential to outperform a random pivot, especially for partially sorted arrays
 */
private int medianOfThreePivot(int leftIdx, int rightIdx) {
    T left = array[leftIdx];
    int midIdx = (leftIdx + rightIdx) / 2;
    T mid = array[midIdx];
    T right = array[rightIdx];
    // does at most 3 comparisons
    if (comp.compare(left, mid) > 0) {
        if (comp.compare(mid, right) > 0) {
            return midIdx;
        } else if (comp.compare(left, right) > 0) {
            return rightIdx;
        } else {
            return leftIdx;
        }
    } else {
        if (comp.compare(left, right) > 0) {
            return leftIdx;
        } else if (comp.compare(mid, right) > 0) {
            return rightIdx;
        } else {
            return midIdx;
        }
    }
}
