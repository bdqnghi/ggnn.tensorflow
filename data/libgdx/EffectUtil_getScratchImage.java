/**
 * Returns an image that can be used by effects as a temp image.
 */
static public BufferedImage getScratchImage() {
    Graphics2D g = (Graphics2D) scratchImage.getGraphics();
    g.setComposite(AlphaComposite.Clear);
    g.fillRect(0, 0, GlyphPage.MAX_GLYPH_SIZE, GlyphPage.MAX_GLYPH_SIZE);
    g.setComposite(AlphaComposite.SrcOver);
    g.setColor(java.awt.Color.white);
    return scratchImage;
}
