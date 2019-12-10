public String extension() {
    String name = file.getName();
    int dotIndex = name.lastIndexOf('.');
    if (dotIndex == -1)
        return "";
    return name.substring(dotIndex + 1);
}
