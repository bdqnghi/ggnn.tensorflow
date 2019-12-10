/**
 * Draws the glyph to the given image, upscaled by a factor of {@link #scale}.
 *
 * @param image the image to draw to
 * @param glyph the glyph to draw
 */
private void drawGlyph(BufferedImage image, Glyph glyph) {
    Graphics2D inputG = (Graphics2D) image.getGraphics();
    inputG.setTransform(AffineTransform.getScaleInstance(scale, scale));
    // We don't really want anti-aliasing (we'll discard it anyway),
    // but accurate positioning might improve the result slightly
    inputG.setRenderingHint(RenderingHints.KEY_FRACTIONALMETRICS, RenderingHints.VALUE_FRACTIONALMETRICS_ON);
    inputG.setColor(Color.WHITE);
    inputG.fill(glyph.getShape());
}
