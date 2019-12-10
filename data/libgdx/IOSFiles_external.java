@Override
public FileHandle external(String path) {
    return new IOSFileHandle(path, FileType.External);
}
