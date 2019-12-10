public void swap(int first, int second) {
    if (first >= size)
        throw new IndexOutOfBoundsException("first can't be >= size: " + first + " >= " + size);
    if (second >= size)
        throw new IndexOutOfBoundsException("second can't be >= size: " + second + " >= " + size);
    short[] items = this.items;
    short firstValue = items[first];
    items[first] = items[second];
    items[second] = firstValue;
}
