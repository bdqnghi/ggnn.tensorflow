public String toString() {
    String name = this.name;
    if (name == null) {
        name = getClass().getName();
        int dotIndex = name.lastIndexOf('.');
        if (dotIndex != -1)
            name = name.substring(dotIndex + 1);
    }
    return name;
}
