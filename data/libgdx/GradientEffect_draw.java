public void draw(BufferedImage image, Graphics2D g, UnicodeFont unicodeFont, Glyph glyph) {
    int ascent = unicodeFont.getAscent();
    float height = (ascent) * scale;
    float top = -glyph.getYOffset() + unicodeFont.getDescent() + offset + ascent / 2 - height / 2;
    g.setPaint(new GradientPaint(0, top, topColor, 0, top + height, bottomColor, cyclic));
    g.fill(glyph.getShape());
}
