private void draw(Graphics g, Array<TextureRegion> regions, Color color, boolean drawIndex) {
    int i = 0;
    for (TextureRegion region : regions) {
        int x = region.getRegionX(), y = region.getRegionY(), h = region.getRegionHeight();
        if (drawIndex) {
            String indexString = "" + i;
            Rectangle bounds = g.getFontMetrics().getStringBounds(indexString, g).getBounds();
            g.setColor(indexBackgroundColor);
            g.fillRect(x, y + h - bounds.height, bounds.width, bounds.height);
            g.setColor(indexColor);
            g.drawString(indexString, x, y + h);
            ++i;
        }
        g.setColor(color);
        g.drawRect(x, y, region.getRegionWidth(), h);
    }
}
