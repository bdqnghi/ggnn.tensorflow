@Override
public FileHandle getFileHandle(String path, FileType type) {
    if (type != FileType.Internal)
        throw new GdxRuntimeException("FileType '" + type + "' not supported in GWT backend");
    return new GwtFileHandle(preloader, path, type);
}
