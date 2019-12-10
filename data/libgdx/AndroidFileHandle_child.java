public FileHandle child(String name) {
    name = name.replace('\\', '/');
    if (file.getPath().length() == 0)
        return new AndroidFileHandle(assets, new File(name), type);
    return new AndroidFileHandle(assets, new File(file, name), type);
}
