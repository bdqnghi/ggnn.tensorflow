public int read(char[] b, int offset, int length) throws IOException {
    byte[] buffer = new byte[length];
    int c = in.read(buffer);
    return c <= 0 ? c : utf8Decoder.decode(buffer, 0, c, b, offset);
}
