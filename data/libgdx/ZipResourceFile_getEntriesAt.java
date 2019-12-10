ZipEntryRO[] getEntriesAt(String path) {
    Vector<ZipEntryRO> zev = new Vector<ZipEntryRO>();
    Collection<ZipEntryRO> values = mHashMap.values();
    if (null == path)
        path = "";
    int length = path.length();
    for (ZipEntryRO ze : values) {
        if (ze.mFileName.startsWith(path)) {
            if (-1 == ze.mFileName.indexOf('/', length)) {
                zev.add(ze);
            }
        }
    }
    ZipEntryRO[] entries = new ZipEntryRO[zev.size()];
    return zev.toArray(entries);
}
