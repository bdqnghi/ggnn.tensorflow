public boolean delete() {
    if (!exists()) {
        return false;
    }
    LocalStorage.removeItem(getCanonicalPath());
    return true;
}
