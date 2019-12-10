public void seek(long pos) throws IOException {
    if (pos < 0) {
        throw new IllegalArgumentException();
    }
    this.pos = (int) pos;
}
