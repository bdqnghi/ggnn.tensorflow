public void close() throws IOException {
    flush();
    out.close();
}
