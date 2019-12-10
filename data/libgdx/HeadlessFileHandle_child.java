public FileHandle child(String name) {
    if (file.getPath().length() == 0)
        return new HeadlessFileHandle(new File(name), type);
    return new HeadlessFileHandle(new File(file, name), type);
}
