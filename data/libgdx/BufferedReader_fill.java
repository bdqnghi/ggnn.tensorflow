private void fill() throws IOException {
    position = 0;
    limit = in.read(buffer);
}
