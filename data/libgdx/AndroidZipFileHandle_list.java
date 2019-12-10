@Override
public FileHandle[] list(String suffix) {
    ZipEntryRO[] zipEntries = expansionFile.getEntriesAt(getPath());
    FileHandle[] handles = new FileHandle[zipEntries.length];
    int count = 0;
    for (int i = 0, n = handles.length; i < n; i++) {
        String path = zipEntries[i].mFileName;
        if (!path.endsWith(suffix))
            continue;
        handles[count] = new AndroidZipFileHandle(path);
        count++;
    }
    if (count < zipEntries.length) {
        FileHandle[] newHandles = new FileHandle[count];
        System.arraycopy(handles, 0, newHandles, 0, count);
        handles = newHandles;
    }
    return handles;
}
