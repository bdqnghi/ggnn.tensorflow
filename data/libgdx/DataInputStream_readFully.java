public void readFully(byte[] b, int off, int len) throws IOException {
    while (len > 0) {
        int count = is.read(b, off, len);
        if (count <= 0) {
            throw new EOFException();
        }
        off += count;
        len -= count;
    }
}
