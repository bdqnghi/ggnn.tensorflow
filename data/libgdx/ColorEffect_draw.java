public void draw(BufferedImage image, Graphics2D g, UnicodeFont unicodeFont, Glyph glyph) {
    g.setColor(color);
    try {
        // Java2D fails on some glyph shapes?!
        g.fill(glyph.getShape());
    } catch (Throwable ignored) {
    }
}
