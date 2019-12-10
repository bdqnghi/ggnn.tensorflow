public void writeChar(int v) throws IOException {
    os.write(v >> 8);
    os.write(v);
}
