public boolean removeAll(Array<? extends T> array, boolean identity) {
    modified();
    return super.removeAll(array, identity);
}
