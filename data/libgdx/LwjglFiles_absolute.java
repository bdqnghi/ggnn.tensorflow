@Override
public FileHandle absolute(String path) {
    return new LwjglFileHandle(path, FileType.Absolute);
}
