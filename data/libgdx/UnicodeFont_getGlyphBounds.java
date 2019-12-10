private Rectangle getGlyphBounds(GlyphVector vector, int index, int codePoint) {
    Rectangle bounds;
    bounds = vector.getGlyphPixelBounds(index, GlyphPage.renderContext, 0, 0);
    if (renderType == RenderType.Native) {
        if (bounds.width == 0 || bounds.height == 0)
            bounds = new Rectangle();
        else
            bounds = metrics.getStringBounds("" + (char) codePoint, GlyphPage.scratchGraphics).getBounds();
    }
    if (codePoint == ' ')
        bounds.width = spaceWidth;
    return bounds;
}
