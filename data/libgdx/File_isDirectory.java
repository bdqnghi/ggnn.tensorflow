public boolean isDirectory() {
    String s = LocalStorage.getItem(getCanonicalPath());
    return s != null && s.startsWith("{");
}
