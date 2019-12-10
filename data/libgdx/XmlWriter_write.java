public void write(char[] cbuf, int off, int len) throws IOException {
    startElementContent();
    writer.write(cbuf, off, len);
}
