private FileHandle getZipFileHandleIfExists(FileHandle handle, String path) {
    try {
        // Check if file exists.
        assets.open(path).close();
        return handle;
    } catch (Exception ex) {
        // try APK expansion instead
        FileHandle zipHandle = new AndroidZipFileHandle(path);
        if (!zipHandle.isDirectory())
            return zipHandle;
        else if (zipHandle.exists())
            return zipHandle;
    }
    return handle;
}
