public void flush() throws IOException {
    drain();
    out.flush();
}
