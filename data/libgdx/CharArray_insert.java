public void insert(int index, char value) {
    if (index > size)
        throw new IndexOutOfBoundsException("index can't be > size: " + index + " > " + size);
    char[] items = this.items;
    if (size == items.length)
        items = resize(Math.max(8, (int) (size * 1.75f)));
    if (ordered)
        System.arraycopy(items, index, items, index + 1, size - index);
    else
        items[size] = items[index];
    size++;
    items[index] = value;
}
