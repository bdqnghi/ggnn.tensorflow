public boolean removeValue(T value, boolean identity) {
    if (iterating > 0) {
        int index = indexOf(value, identity);
        if (index == -1)
            return false;
        remove(index);
        return true;
    }
    return super.removeValue(value, identity);
}
