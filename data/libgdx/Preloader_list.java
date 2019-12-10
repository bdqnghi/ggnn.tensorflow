public FileHandle[] list(String url, String suffix) {
    Array<FileHandle> files = new Array<FileHandle>();
    for (String path : texts.keys()) {
        if (isChild(path, url) && path.endsWith(suffix)) {
            files.add(new GwtFileHandle(this, path, FileType.Internal));
        }
    }
    FileHandle[] list = new FileHandle[files.size];
    System.arraycopy(files.items, 0, list, 0, list.length);
    return list;
}
