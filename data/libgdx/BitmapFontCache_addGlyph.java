private void addGlyph(Glyph glyph, float x, float y, float color) {
    final float scaleX = font.data.scaleX, scaleY = font.data.scaleY;
    x += glyph.xoffset * scaleX;
    y += glyph.yoffset * scaleY;
    float width = glyph.width * scaleX, height = glyph.height * scaleY;
    final float u = glyph.u, u2 = glyph.u2, v = glyph.v, v2 = glyph.v2;
    if (integer) {
        x = Math.round(x);
        y = Math.round(y);
        width = Math.round(width);
        height = Math.round(height);
    }
    final float x2 = x + width, y2 = y + height;
    final int page = glyph.page;
    int idx = this.idx[page];
    this.idx[page] += 20;
    if (pageGlyphIndices != null)
        pageGlyphIndices[page].add(glyphCount++);
    final float[] vertices = pageVertices[page];
    vertices[idx++] = x;
    vertices[idx++] = y;
    vertices[idx++] = color;
    vertices[idx++] = u;
    vertices[idx++] = v;
    vertices[idx++] = x;
    vertices[idx++] = y2;
    vertices[idx++] = color;
    vertices[idx++] = u;
    vertices[idx++] = v2;
    vertices[idx++] = x2;
    vertices[idx++] = y2;
    vertices[idx++] = color;
    vertices[idx++] = u2;
    vertices[idx++] = v2;
    vertices[idx++] = x2;
    vertices[idx++] = y;
    vertices[idx++] = color;
    vertices[idx++] = u2;
    vertices[idx] = v;
}
