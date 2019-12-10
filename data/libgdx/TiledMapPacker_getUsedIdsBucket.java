/**
 * Returns the usedIds bucket for the given tileset name. If it doesn't exist one will be created with the specified size if
 * its > 0, else null will be returned.
 *
 * @param size The size to use to create a new bucket if it doesn't exist, else specify 0 or lower to return null instead
 * @return a bucket
 */
private IntArray getUsedIdsBucket(String tilesetName, int size) {
    if (tilesetUsedIds.containsKey(tilesetName)) {
        return tilesetUsedIds.get(tilesetName);
    }
    if (size <= 0) {
        return null;
    }
    IntArray bucket = new IntArray(size);
    tilesetUsedIds.put(tilesetName, bucket);
    return bucket;
}
