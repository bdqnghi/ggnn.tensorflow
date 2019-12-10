@Override
public FileHandle external(String path) {
    return new HeadlessFileHandle(path, FileType.External);
}
