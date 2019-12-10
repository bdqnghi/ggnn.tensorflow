public int read(byte[] buffer) {
    if (input == null) {
        input = new OggInputStream(file.read(), previousInput);
        setup(input.getChannels(), input.getSampleRate());
        // release this reference
        previousInput = null;
    }
    return input.read(buffer);
}
