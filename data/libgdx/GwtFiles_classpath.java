@Override
public FileHandle classpath(String path) {
    return new GwtFileHandle(preloader, path, FileType.Classpath);
}
