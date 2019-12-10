private void skipFully(int count) throws IOException {
    while (count > 0) {
        long skipped = in.skip(count);
        if (skipped <= 0)
            throw new EOFException("Unable to skip.");
        count -= skipped;
    }
}
