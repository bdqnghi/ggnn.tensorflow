public String toString() {
    StringBuilder buffer = new StringBuilder(glyphs.size);
    Array<Glyph> glyphs = this.glyphs;
    for (int i = 0, n = glyphs.size; i < n; i++) {
        Glyph g = glyphs.get(i);
        buffer.append((char) g.id);
    }
    buffer.append(", #");
    buffer.append(color);
    buffer.append(", ");
    buffer.append(x);
    buffer.append(", ");
    buffer.append(y);
    buffer.append(", ");
    buffer.append(width);
    return buffer.toString();
}
