/*
	 * public File[] listFiles(FileFilter filter) { return null; }
	 */
public boolean mkdir() {
    if (parent != null && !parent.exists()) {
        return false;
    }
    if (exists()) {
        return false;
    }
    // We may want to make this a JS map
    LocalStorage.setItem(getCanonicalPath(), "{}");
    return true;
}
