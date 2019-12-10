public V getValueAt(int index) {
    if (index >= size)
        throw new IndexOutOfBoundsException(String.valueOf(index));
    return values[index];
}
