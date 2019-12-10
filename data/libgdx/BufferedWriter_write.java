public void write(char[] b, int offset, int length) throws IOException {
    if (length > buffer.length - position) {
        drain();
        out.write(b, offset, length);
    } else {
        System.arraycopy(b, offset, buffer, position, length);
        position += length;
    }
}
