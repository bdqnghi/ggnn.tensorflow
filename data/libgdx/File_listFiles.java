public File[] listFiles(FilenameFilter filter) {
    ArrayList<File> files = new ArrayList<File>();
    String prefix = getCanonicalPath();
    if (!prefix.endsWith(separator)) {
        prefix += separatorChar;
    }
    int cut = prefix.length();
    int cnt = LocalStorage.getLength();
    for (int i = 0; i < cnt; i++) {
        String key = LocalStorage.key(i);
        if (key.startsWith(prefix) && key.indexOf(separatorChar, cut) == -1) {
            String name = key.substring(cut);
            if (filter == null || filter.accept(this, name)) {
                files.add(new File(this, name));
            }
        }
    }
    return files.toArray(new File[files.size()]);
}
