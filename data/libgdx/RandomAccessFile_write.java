public void write(int b) throws IOException {
    if (!writeable) {
        throw new IOException("not writeable");
    }
    if (newData == null) {
        newDataPos = pos;
        newData = new StringBuilder();
    // System.out.println("no buf; newDataPos: " + pos);
    } else if (newDataPos + newData.length() != pos) {
        consolidate();
        newDataPos = pos;
        newData = new StringBuilder();
    // System.out.println("pos mismatch; newDataPos: " + pos);
    }
    newData.append((char) (b & 255));
    // newData.append("" + Character.forDigit((b >> 4) & 15, 16) +
    // Character.forDigit(b & 15, 16));
    pos++;
    len = Math.max(pos, len);
    dirty = true;
}
