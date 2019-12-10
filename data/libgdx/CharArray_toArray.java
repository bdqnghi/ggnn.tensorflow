public char[] toArray() {
    char[] array = new char[size];
    System.arraycopy(items, 0, array, 0, size);
    return array;
}
