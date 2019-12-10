private void requirePageGlyphs(int page, int glyphCount) {
    if (pageGlyphIndices != null) {
        if (glyphCount > pageGlyphIndices[page].items.length)
            pageGlyphIndices[page].ensureCapacity(glyphCount - pageGlyphIndices[page].items.length);
    }
    int vertexCount = idx[page] + glyphCount * 20;
    float[] vertices = pageVertices[page];
    if (vertices == null) {
        pageVertices[page] = new float[vertexCount];
    } else if (vertices.length < vertexCount) {
        float[] newVertices = new float[vertexCount];
        System.arraycopy(vertices, 0, newVertices, 0, idx[page]);
        pageVertices[page] = newVertices;
    }
}
