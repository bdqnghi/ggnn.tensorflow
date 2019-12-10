public FileDescriptor parent() {
    File parent = file.getParentFile();
    if (parent == null) {
        if (type == FileType.Absolute)
            parent = new File("/");
        else
            parent = new File("");
    }
    return new FileDescriptor(parent, type);
}
