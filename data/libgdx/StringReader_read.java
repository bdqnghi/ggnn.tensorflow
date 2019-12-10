public int read(char[] b, int offset, int length) throws IOException {
    if (length > in.length() - position) {
        length = in.length() - position;
        if (length <= 0) {
            return -1;
        }
    }
    in.getChars(position, position + length, b, offset);
    position += length;
    return length;
}
