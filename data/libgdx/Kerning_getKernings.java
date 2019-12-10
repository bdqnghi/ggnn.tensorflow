/**
 * @return A map from pairs of glyph codes to their kerning in pixels. Each map key encodes two glyph codes:
 * the high 16 bits form the first glyph code, and the low 16 bits form the second.
 */
public IntIntMap getKernings() {
    return kernings;
}
