private String extension(String file) {
    String name = file;
    int dotIndex = name.lastIndexOf('.');
    if (dotIndex == -1)
        return "";
    return name.substring(dotIndex + 1);
}
