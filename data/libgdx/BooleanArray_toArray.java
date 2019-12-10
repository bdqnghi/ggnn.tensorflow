public boolean[] toArray() {
    boolean[] array = new boolean[size];
    System.arraycopy(items, 0, array, 0, size);
    return array;
}
