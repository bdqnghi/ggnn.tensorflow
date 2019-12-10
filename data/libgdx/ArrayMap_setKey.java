public void setKey(int index, K key) {
    if (index >= size)
        throw new IndexOutOfBoundsException(String.valueOf(index));
    keys[index] = key;
}
