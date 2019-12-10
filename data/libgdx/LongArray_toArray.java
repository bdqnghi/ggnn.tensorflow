public long[] toArray() {
    long[] array = new long[size];
    System.arraycopy(items, 0, array, 0, size);
    return array;
}
