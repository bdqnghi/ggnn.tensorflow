public void setValue(int index, V value) {
    if (index >= size)
        throw new IndexOutOfBoundsException(String.valueOf(index));
    values[index] = value;
}
