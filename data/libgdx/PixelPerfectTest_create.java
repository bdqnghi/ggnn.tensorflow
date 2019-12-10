@Override
public void create() {
    Pixmap pixmap = new Pixmap(16, 16, Pixmap.Format.RGBA8888);
    pixmap.setColor(Color.BLUE);
    pixmap.fill();
    pixmap.setColor(Color.RED);
    pixmap.drawLine(0, 0, 15, 15);
    pixmap.drawLine(0, 15, 15, 0);
    tex = new Texture(pixmap);
    batch = new SpriteBatch();
    cam = new OrthographicCamera();
    cam.setToOrtho(false, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
}
