@Override
public FileHandle child(String name) {
    if (file.getPath().length() == 0)
        return new IOSFileHandle(new File(name), type);
    return new IOSFileHandle(new File(file, name), type);
}
