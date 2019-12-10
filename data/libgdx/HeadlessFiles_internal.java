@Override
public FileHandle internal(String path) {
    return new HeadlessFileHandle(path, FileType.Internal);
}
