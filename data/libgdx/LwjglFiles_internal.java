@Override
public FileHandle internal(String path) {
    return new LwjglFileHandle(path, FileType.Internal);
}
