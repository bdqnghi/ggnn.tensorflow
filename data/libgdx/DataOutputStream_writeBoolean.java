public void writeBoolean(boolean v) throws IOException {
    os.write(v ? 1 : 0);
}
