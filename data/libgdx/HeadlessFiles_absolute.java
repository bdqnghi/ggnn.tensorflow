@Override
public FileHandle absolute(String path) {
    return new HeadlessFileHandle(path, FileType.Absolute);
}
