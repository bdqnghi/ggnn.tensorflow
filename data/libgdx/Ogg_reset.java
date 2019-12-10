public void reset() {
    StreamUtils.closeQuietly(input);
    previousInput = null;
    input = null;
}
