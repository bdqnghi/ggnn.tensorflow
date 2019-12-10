public String toString() {
    String name = getClass().getName();
    int dotIndex = name.lastIndexOf('.');
    if (dotIndex != -1)
        name = name.substring(dotIndex + 1);
    if (name.endsWith("Action"))
        name = name.substring(0, name.length() - 6);
    return name;
}
