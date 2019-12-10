public void draw(BufferedImage image, Graphics2D g, UnicodeFont unicodeFont, Glyph glyph) {
    g = (Graphics2D) g.create();
    if (stroke != null)
        g.setStroke(stroke);
    else
        g.setStroke(getStroke());
    g.setColor(color);
    g.draw(glyph.getShape());
    g.dispose();
}
