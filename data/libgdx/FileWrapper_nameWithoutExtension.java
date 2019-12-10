public String nameWithoutExtension() {
    String name = file.getName();
    int dotIndex = name.lastIndexOf('.');
    if (dotIndex == -1)
        return name;
    return name.substring(0, dotIndex);
}
