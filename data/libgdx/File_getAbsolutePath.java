public String getAbsolutePath() {
    String path = getAbsoluteFile().getPath();
    return path.length() == 0 ? "/" : path;
}
