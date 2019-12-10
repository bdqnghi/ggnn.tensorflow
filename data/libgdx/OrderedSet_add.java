public boolean add(T key) {
    if (!contains(key))
        items.add(key);
    return super.add(key);
}
