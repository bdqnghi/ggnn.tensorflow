public boolean createNewFile() throws IOException {
    if (exists())
        return false;
    if (!parent.exists())
        return false;
    LocalStorage.setItem(getCanonicalPath(), RandomAccessFile.btoa(""));
    return true;
}
