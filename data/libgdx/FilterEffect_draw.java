public void draw(BufferedImage image, Graphics2D g, UnicodeFont unicodeFont, Glyph glyph) {
    BufferedImage scratchImage = EffectUtil.getScratchImage();
    filter.filter(image, scratchImage);
    image.getGraphics().drawImage(scratchImage, 0, 0, null);
}
