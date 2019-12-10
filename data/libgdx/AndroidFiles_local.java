@Override
public FileHandle local(String path) {
    return new AndroidFileHandle(null, path, FileType.Local);
}
