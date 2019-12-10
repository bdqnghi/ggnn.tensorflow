public byte[] toArray() {
    byte[] array = new byte[size];
    System.arraycopy(items, 0, array, 0, size);
    return array;
}
