public K getKeyAt(int index) {
    if (index >= size)
        throw new IndexOutOfBoundsException(String.valueOf(index));
    return keys[index];
}
