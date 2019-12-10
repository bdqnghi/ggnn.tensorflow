static Icon getColorIcon(java.awt.Color color) {
    BufferedImage image = new BufferedImage(32, 16, BufferedImage.TYPE_INT_RGB);
    java.awt.Graphics g = image.getGraphics();
    g.setColor(color);
    g.fillRect(1, 1, 30, 14);
    g.setColor(java.awt.Color.black);
    g.drawRect(0, 0, 31, 15);
    return new ImageIcon(image);
}
