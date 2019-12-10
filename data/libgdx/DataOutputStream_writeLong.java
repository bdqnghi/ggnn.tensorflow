public void writeLong(long v) throws IOException {
    writeInt((int) (v >> 32L));
    writeInt((int) v);
}
