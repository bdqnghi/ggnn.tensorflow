private static String fixSlashes(String path) {
    path = path.replace('\\', '/');
    if (path.endsWith("/")) {
        path = path.substring(0, path.length() - 1);
    }
    return path;
}
