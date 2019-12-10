/**
 * Checks that fromIndex and toIndex are in range, and throws an appropriate exception if they aren't.
 *
 * @param arrayLen the length of the array
 * @param fromIndex the index of the first element of the range
 * @param toIndex the index after the last element of the range
 * @throws IllegalArgumentException if fromIndex > toIndex
 * @throws ArrayIndexOutOfBoundsException if fromIndex < 0 or toIndex > arrayLen
 */
private static void rangeCheck(int arrayLen, int fromIndex, int toIndex) {
    if (fromIndex > toIndex)
        throw new IllegalArgumentException("fromIndex(" + fromIndex + ") > toIndex(" + toIndex + ")");
    if (fromIndex < 0)
        throw new ArrayIndexOutOfBoundsException(fromIndex);
    if (toIndex > arrayLen)
        throw new ArrayIndexOutOfBoundsException(toIndex);
}
