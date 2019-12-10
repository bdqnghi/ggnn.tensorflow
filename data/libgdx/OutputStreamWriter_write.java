public void write(char[] b, int offset, int length) throws IOException {
    out.write(Utf8.encode(b, offset, length));
}
