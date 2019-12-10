@Override
public FileHandle classpath(String path) {
    return new HeadlessFileHandle(path, FileType.Classpath);
}
