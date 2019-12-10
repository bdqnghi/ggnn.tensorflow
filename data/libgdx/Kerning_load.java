/**
 * @param inputStream The data for the TTF font.
 * @param fontSize The font size to use to determine kerning pixel offsets.
 * @throws IOException If the font could not be read.
 */
public void load(InputStream inputStream, int fontSize) throws IOException {
    if (inputStream == null)
        throw new IllegalArgumentException("inputStream cannot be null.");
    input = new TTFInputStream(inputStream);
    inputStream.close();
    readTableDirectory();
    if (headOffset == -1)
        throw new IOException("HEAD table not found.");
    readHEAD(fontSize);
    // the GPOS table incorrectly because we ignore most of it, since BMFont doesn't support its features.
    if (gposOffset != -1) {
        input.seek(gposOffset);
        readGPOS();
    }
    if (kernOffset != -1) {
        input.seek(kernOffset);
        readKERN();
    }
    input.close();
    input = null;
}
