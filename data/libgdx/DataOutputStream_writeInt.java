public void writeInt(int v) throws IOException {
    os.write(v >> 24);
    os.write(v >> 16);
    os.write(v >> 8);
    os.write(v);
}
