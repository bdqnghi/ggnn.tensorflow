private static BufferedImage createImage(int width, int height, Color color) {
    BufferedImage image = new BufferedImage(width, height, BufferedImage.TYPE_4BYTE_ABGR);
    Graphics2D g = image.createGraphics();
    g.setColor(color);
    g.fillRect(0, 0, width, height);
    g.dispose();
    return image;
}
