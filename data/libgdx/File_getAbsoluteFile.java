public File getAbsoluteFile() {
    if (isAbsolute()) {
        return this;
    }
    if (parent == null) {
        return new File(ROOT, name);
    }
    return new File(parent.getAbsoluteFile(), name);
}
