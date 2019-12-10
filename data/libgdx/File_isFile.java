public boolean isFile() {
    String s = LocalStorage.getItem(getCanonicalPath());
    return s != null && !s.startsWith("{");
}
