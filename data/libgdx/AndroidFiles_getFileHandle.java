@Override
public FileHandle getFileHandle(String path, FileType type) {
    FileHandle handle = new AndroidFileHandle(type == FileType.Internal ? assets : null, path, type);
    if (expansionFile != null && type == FileType.Internal)
        handle = getZipFileHandleIfExists(handle, path);
    return handle;
}
