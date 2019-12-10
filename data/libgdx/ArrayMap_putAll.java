public void putAll(ArrayMap map, int offset, int length) {
    if (offset + length > map.size)
        throw new IllegalArgumentException("offset + length must be <= size: " + offset + " + " + length + " <= " + map.size);
    int sizeNeeded = size + length - offset;
    if (sizeNeeded >= keys.length)
        resize(Math.max(8, (int) (sizeNeeded * 1.75f)));
    System.arraycopy(map.keys, offset, keys, size, length);
    System.arraycopy(map.values, offset, values, size, length);
    size += length;
}
