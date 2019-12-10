@Override
public void create() {
    Pixmap pixmap = new Pixmap(512, 512, Format.RGBA8888);
    pixmap.setColor(Color.WHITE);
    Bresenham2 bresenham = new Bresenham2();
    for (GridPoint2 point : bresenham.line(0, 0, 512, 512)) pixmap.drawPixel(point.x, point.y);
    for (GridPoint2 point : bresenham.line(512, 0, 0, 512)) pixmap.drawPixel(point.x, point.y);
    for (GridPoint2 point : bresenham.line(0, 0, 512, 256)) pixmap.drawPixel(point.x, point.y);
    for (GridPoint2 point : bresenham.line(512, 0, 0, 256)) pixmap.drawPixel(point.x, point.y);
    result = new Texture(pixmap);
    batch = new SpriteBatch();
}
