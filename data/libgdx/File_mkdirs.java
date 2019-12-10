public boolean mkdirs() {
    if (parent != null) {
        parent.mkdirs();
    }
    return mkdir();
}
