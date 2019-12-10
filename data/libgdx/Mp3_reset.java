public void reset() {
    if (bitstream == null)
        return;
    try {
        bitstream.close();
    } catch (BitstreamException ignored) {
    }
    bitstream = null;
}
