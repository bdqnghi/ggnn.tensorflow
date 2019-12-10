void close() throws IOException {
    out.writeByte(array ? ']' : '}');
}
