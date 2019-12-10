public FileHandle parent() {
    int index = file.lastIndexOf("/");
    String dir = "";
    if (index > 0)
        dir = file.substring(0, index);
    return new GwtFileHandle(preloader, dir, type);
}
