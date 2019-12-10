@Override
public FileHandle external(String path) {
    return new AndroidFileHandle(null, path, FileType.External);
}
