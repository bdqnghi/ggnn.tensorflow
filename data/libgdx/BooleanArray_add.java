public void add(boolean value) {
    boolean[] items = this.items;
    if (size == items.length)
        items = resize(Math.max(8, (int) (size * 1.75f)));
    items[size++] = value;
}
