void close() throws IOException {
    writer.write(array ? ']' : '}');
}
