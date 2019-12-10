public boolean isAbsolute() {
    if (isRoot()) {
        return true;
    }
    if (parent == null) {
        return false;
    }
    return parent.isAbsolute();
}
