public boolean exists() {
    return LocalStorage.getItem(getCanonicalPath()) != null;
}
