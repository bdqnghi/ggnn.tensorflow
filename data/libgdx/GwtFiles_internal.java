@Override
public FileHandle internal(String path) {
    return new GwtFileHandle(preloader, path, FileType.Internal);
}
