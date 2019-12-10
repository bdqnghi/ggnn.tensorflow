/**
 * Compresses the given {@link InputStream} into the given {@link OutputStream}.
 *
 * @param in the {@link InputStream} to compress
 * @param out the {@link OutputStream} to compress to
 * @throws IOException
 */
static public void compress(InputStream in, OutputStream out) throws IOException {
    CommandLine params = new CommandLine();
    boolean eos = false;
    if (params.Eos)
        eos = true;
    com.badlogic.gdx.utils.compression.lzma.Encoder encoder = new com.badlogic.gdx.utils.compression.lzma.Encoder();
    if (!encoder.SetAlgorithm(params.Algorithm))
        throw new RuntimeException("Incorrect compression mode");
    if (!encoder.SetDictionarySize(params.DictionarySize))
        throw new RuntimeException("Incorrect dictionary size");
    if (!encoder.SetNumFastBytes(params.Fb))
        throw new RuntimeException("Incorrect -fb value");
    if (!encoder.SetMatchFinder(params.MatchFinder))
        throw new RuntimeException("Incorrect -mf value");
    if (!encoder.SetLcLpPb(params.Lc, params.Lp, params.Pb))
        throw new RuntimeException("Incorrect -lc or -lp or -pb value");
    encoder.SetEndMarkerMode(eos);
    encoder.WriteCoderProperties(out);
    long fileSize;
    if (eos) {
        fileSize = -1;
    } else {
        if ((fileSize = in.available()) == 0) {
            fileSize = -1;
        }
    }
    for (int i = 0; i < 8; i++) {
        out.write((int) (fileSize >>> (8 * i)) & 0xFF);
    }
    encoder.Code(in, out, -1, -1, null);
}
