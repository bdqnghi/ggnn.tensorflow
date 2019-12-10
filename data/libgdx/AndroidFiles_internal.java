@Override
public FileHandle internal(String path) {
    FileHandle handle = new AndroidFileHandle(assets, path, FileType.Internal);
    if (expansionFile != null)
        handle = getZipFileHandleIfExists(handle, path);
    return handle;
}
