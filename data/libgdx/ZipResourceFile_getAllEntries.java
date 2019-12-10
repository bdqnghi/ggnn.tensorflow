public ZipEntryRO[] getAllEntries() {
    Collection<ZipEntryRO> values = mHashMap.values();
    return values.toArray(new ZipEntryRO[values.size()]);
}
