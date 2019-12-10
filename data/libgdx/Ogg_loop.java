@Override
protected void loop() {
    StreamUtils.closeQuietly(input);
    previousInput = input;
    input = null;
}
