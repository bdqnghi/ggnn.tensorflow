public FileHandle parent() {
    File parent = file.getParentFile();
    if (parent == null) {
        if (type == FileType.Absolute)
            parent = new File("/");
        else
            parent = new File("");
    }
    return new AndroidFileHandle(assets, parent, type);
}
