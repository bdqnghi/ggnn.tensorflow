public void create() {
    Pixmap pixmap1 = new Pixmap(Gdx.files.internal("data/bobargb8888-32x32.png"));
    cursor1 = Gdx.graphics.newCursor(pixmap1, 16, 16);
    Pixmap pixmap2 = new Pixmap(32, 32, Format.RGBA8888);
    pixmap2.setColor(Color.RED);
    pixmap2.fillCircle(16, 16, 8);
    cursor2 = Gdx.graphics.newCursor(pixmap2, 16, 16);
    Pixmap pixmap3 = new Pixmap(32, 32, Format.RGBA8888);
    pixmap3.setColor(Color.BLUE);
    pixmap3.fillCircle(16, 16, 8);
    cursor3 = Gdx.graphics.newCursor(pixmap3, 16, 16);
}
