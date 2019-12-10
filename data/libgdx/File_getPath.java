public String getPath() {
    return parent == null ? name : (parent.getPath() + separatorChar + name);
}
