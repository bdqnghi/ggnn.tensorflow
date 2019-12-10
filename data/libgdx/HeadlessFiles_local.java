@Override
public FileHandle local(String path) {
    return new HeadlessFileHandle(path, FileType.Local);
}
