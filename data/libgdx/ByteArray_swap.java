public void swap(int first, int second) {
    if (first >= size)
        throw new IndexOutOfBoundsException("first can't be >= size: " + first + " >= " + size);
    if (second >= size)
        throw new IndexOutOfBoundsException("second can't be >= size: " + second + " >= " + size);
    byte[] items = this.items;
    byte firstValue = items[first];
    items[first] = items[second];
    items[second] = firstValue;
}
