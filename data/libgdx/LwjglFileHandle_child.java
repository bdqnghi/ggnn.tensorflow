public FileHandle child(String name) {
    if (file.getPath().length() == 0)
        return new LwjglFileHandle(new File(name), type);
    return new LwjglFileHandle(new File(file, name), type);
}
