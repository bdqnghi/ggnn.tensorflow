@Override
public FileHandle classpath(String path) {
    return new AndroidFileHandle(null, path, FileType.Classpath);
}
