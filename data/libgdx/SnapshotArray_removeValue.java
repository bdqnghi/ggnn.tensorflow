public boolean removeValue(T value, boolean identity) {
    modified();
    return super.removeValue(value, identity);
}
