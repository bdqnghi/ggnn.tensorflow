public synchronized int read(byte[] b, int off, int len) {
    if (b == null) {
        throw new NullPointerException();
    } else if (off < 0 || len < 0 || len > b.length - off) {
        throw new IndexOutOfBoundsException();
    }
    if (pos >= count) {
        return -1;
    }
    int avail = count - pos;
    if (len > avail) {
        len = avail;
    }
    if (len <= 0) {
        return 0;
    }
    System.arraycopy(buf, pos, b, off, len);
    pos += len;
    return len;
}
