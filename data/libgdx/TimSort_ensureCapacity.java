/**
 * Ensures that the external array tmp has at least the specified number of elements, increasing its size if necessary. The
 * size increases exponentially to ensure amortized linear time complexity.
 *
 * @param minCapacity the minimum required capacity of the tmp array
 * @return tmp, whether or not it grew
 */
private T[] ensureCapacity(int minCapacity) {
    tmpCount = Math.max(tmpCount, minCapacity);
    if (tmp.length < minCapacity) {
        // Compute smallest power of 2 > minCapacity
        int newSize = minCapacity;
        newSize |= newSize >> 1;
        newSize |= newSize >> 2;
        newSize |= newSize >> 4;
        newSize |= newSize >> 8;
        newSize |= newSize >> 16;
        newSize++;
        if (// Not bloody likely!
        newSize < 0)
            newSize = minCapacity;
        else
            newSize = Math.min(newSize, a.length >>> 1);
        T[] newArray = (T[]) new Object[newSize];
        tmp = newArray;
    }
    return tmp;
}
