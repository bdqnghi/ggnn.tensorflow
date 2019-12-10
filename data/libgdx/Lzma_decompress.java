/**
 * Decompresses the given {@link InputStream} into the given {@link OutputStream}.
 *
 * @param in the {@link InputStream} to decompress
 * @param out the {@link OutputStream} to decompress to
 * @throws IOException
 */
static public void decompress(InputStream in, OutputStream out) throws IOException {
    int propertiesSize = 5;
    byte[] properties = new byte[propertiesSize];
    if (in.read(properties, 0, propertiesSize) != propertiesSize)
        throw new RuntimeException("input .lzma file is too short");
    com.badlogic.gdx.utils.compression.lzma.Decoder decoder = new com.badlogic.gdx.utils.compression.lzma.Decoder();
    if (!decoder.SetDecoderProperties(properties))
        throw new RuntimeException("Incorrect stream properties");
    long outSize = 0;
    for (int i = 0; i < 8; i++) {
        int v = in.read();
        if (v < 0) {
            throw new RuntimeException("Can't read stream size");
        }
        outSize |= ((long) v) << (8 * i);
    }
    if (!decoder.Code(in, out, outSize)) {
        throw new RuntimeException("Error in data stream");
    }
}
