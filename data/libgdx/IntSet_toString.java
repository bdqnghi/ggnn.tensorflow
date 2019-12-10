public String toString() {
    if (size == 0)
        return "[]";
    StringBuilder buffer = new StringBuilder(32);
    buffer.append('[');
    int[] keyTable = this.keyTable;
    int i = keyTable.length;
    if (hasZeroValue)
        buffer.append("0");
    else {
        while (i-- > 0) {
            int key = keyTable[i];
            if (key == EMPTY)
                continue;
            buffer.append(key);
            break;
        }
    }
    while (i-- > 0) {
        int key = keyTable[i];
        if (key == EMPTY)
            continue;
        buffer.append(", ");
        buffer.append(key);
    }
    buffer.append(']');
    return buffer.toString();
}
