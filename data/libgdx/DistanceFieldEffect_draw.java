@Override
public void draw(BufferedImage image, Graphics2D g, UnicodeFont unicodeFont, Glyph glyph) {
    BufferedImage input = new BufferedImage(scale * glyph.getWidth(), scale * glyph.getHeight(), BufferedImage.TYPE_BYTE_BINARY);
    drawGlyph(input, glyph);
    DistanceFieldGenerator generator = new DistanceFieldGenerator();
    generator.setColor(color);
    generator.setDownscale(scale);
    // We multiply spread by the scale, so that changing scale will only affect accuracy
    // and not spread in the output image.
    generator.setSpread(scale * spread);
    BufferedImage distanceField = generator.generateDistanceField(input);
    g.drawImage(distanceField, new AffineTransform(), null);
}
