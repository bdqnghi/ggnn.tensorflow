@Override
public void create() {
    batch = new SpriteBatch();
    sprites = new ArrayList<Sprite>();
    Gdx2DPixmap[] pixmaps = testPixmaps();
    Gdx2DPixmap composite = new Gdx2DPixmap(512, 256, Gdx2DPixmap.GDX2D_FORMAT_RGBA8888);
    composite.clear(0);
    Gdx2DPixmap.setBlend(Gdx2DPixmap.GDX2D_BLEND_NONE);
    for (int i = 0; i < pixmaps.length; i++) {
        Gdx2DPixmap.setScale(Gdx2DPixmap.GDX2D_SCALE_NEAREST);
        composite.drawPixmap(pixmaps[i], 0, 0, 32, 32, i * 64, 0, 64, 64);
        composite.drawPixmap(pixmaps[i], 0, 0, 32, 32, i * 64, 64, 16, 16);
        composite.drawPixmap(pixmaps[i], 0, 0, 32, 32, i * 64, 0, 64, 64);
        composite.drawPixmap(pixmaps[i], 0, 0, 32, 32, i * 64, 64, 16, 16);
        Gdx2DPixmap.setScale(Gdx2DPixmap.GDX2D_SCALE_LINEAR);
        composite.drawPixmap(pixmaps[i], 0, 0, 32, 32, i * 64, 100, 64, 64);
        composite.drawPixmap(pixmaps[i], 0, 0, 32, 32, i * 64, 164, 16, 16);
        composite.drawPixmap(pixmaps[i], 0, 0, 32, 32, i * 64, 100, 64, 64);
        composite.drawPixmap(pixmaps[i], 0, 0, 32, 32, i * 64, 164, 16, 16);
        Sprite sprite = new Sprite(textureFromPixmap(pixmaps[i]));
        sprite.setPosition(10 + i * 32, 10);
        sprites.add(sprite);
    }
    Sprite sprite = new Sprite(textureFromPixmap(composite));
    sprite.setPosition(10, 50);
    sprites.add(sprite);
}
