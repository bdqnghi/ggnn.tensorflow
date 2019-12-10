/**
 * Sets the color of the specified characters. This may only be called after {@link #setText(CharSequence, float, float)} and
 * is reset every time setText is called.
 */
public void setColors(float color, int start, int end) {
    if (pageVertices.length == 1) {
        // One page.
        float[] vertices = pageVertices[0];
        for (int i = start * 20 + 2, n = end * 20; i < n; i += 5) vertices[i] = color;
        return;
    }
    int pageCount = pageVertices.length;
    for (int i = 0; i < pageCount; i++) {
        float[] vertices = pageVertices[i];
        IntArray glyphIndices = pageGlyphIndices[i];
        // Loop through the indices and determine whether the glyph is inside begin/end.
        for (int j = 0, n = glyphIndices.size; j < n; j++) {
            int glyphIndex = glyphIndices.items[j];
            // Break early if the glyph is out of bounds.
            if (glyphIndex >= end)
                break;
            // If inside start and end, change its colour.
            if (glyphIndex >= start) {
                // && glyphIndex < end
                for (int off = 0; off < 20; off += 5) vertices[off + (j * 20 + 2)] = color;
            }
        }
    }
}
