public String toString(String separator) {
    if (size == 0)
        return "";
    StringBuilder buffer = new StringBuilder(32);
    T[] keyTable = this.keyTable;
    int i = keyTable.length;
    while (i-- > 0) {
        T key = keyTable[i];
        if (key == null)
            continue;
        buffer.append(key);
        break;
    }
    while (i-- > 0) {
        T key = keyTable[i];
        if (key == null)
            continue;
        buffer.append(separator);
        buffer.append(key);
    }
    return buffer.toString();
}
