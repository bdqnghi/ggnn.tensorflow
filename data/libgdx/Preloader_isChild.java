private boolean isChild(String path, String url) {
    return path.startsWith(url) && (path.indexOf('/', url.length() + 1) < 0);
}
