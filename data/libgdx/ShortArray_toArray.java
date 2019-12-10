public short[] toArray() {
    short[] array = new short[size];
    System.arraycopy(items, 0, array, 0, size);
    return array;
}
