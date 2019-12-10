@Override
public FileHandle child(String name) {
    if (file.getPath().length() == 0)
        return new AndroidZipFileHandle(new File(name), type);
    return new AndroidZipFileHandle(new File(file, name), type);
}
