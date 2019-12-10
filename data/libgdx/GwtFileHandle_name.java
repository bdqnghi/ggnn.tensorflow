public String name() {
    int index = file.lastIndexOf('/');
    if (index < 0)
        return file;
    return file.substring(index + 1);
}
