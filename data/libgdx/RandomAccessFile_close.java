public void close() throws IOException {
    if (data != null) {
        flush();
        data = null;
    }
}
