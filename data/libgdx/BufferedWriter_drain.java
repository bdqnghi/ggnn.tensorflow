private void drain() throws IOException {
    if (position > 0) {
        out.write(buffer, 0, position);
        position = 0;
    }
}
