public void incr(int index, byte value) {
    if (index >= size)
        throw new IndexOutOfBoundsException("index can't be >= size: " + index + " >= " + size);
    items[index] += value;
}
