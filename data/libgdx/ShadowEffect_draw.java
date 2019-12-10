public void draw(BufferedImage image, Graphics2D g, UnicodeFont unicodeFont, Glyph glyph) {
    g = (Graphics2D) g.create();
    g.translate(xDistance, yDistance);
    g.setColor(new Color(color.getRed(), color.getGreen(), color.getBlue(), Math.round(opacity * 255)));
    g.fill(glyph.getShape());
    // Also shadow the outline, if one exists.
    for (Iterator iter = unicodeFont.getEffects().iterator(); iter.hasNext(); ) {
        Effect effect = (Effect) iter.next();
        if (effect instanceof OutlineEffect) {
            Composite composite = g.getComposite();
            // Prevent shadow and outline shadow alpha from combining.
            g.setComposite(AlphaComposite.Src);
            g.setStroke(((OutlineEffect) effect).getStroke());
            g.draw(glyph.getShape());
            g.setComposite(composite);
            break;
        }
    }
    g.dispose();
    if (blurKernelSize > 1 && blurKernelSize < NUM_KERNELS && blurPasses > 0)
        blur(image);
}
