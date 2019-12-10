@Override
public void create() {
    spriteBatch = new SpriteBatch(1000);
    Pixmap pixmap = new Pixmap(Gdx.files.internal("data/badlogicsmall.jpg"));
    texture = new Texture(32, 32, Format.RGB565);
    texture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    texture.draw(pixmap, 0, 0);
    pixmap.dispose();
    pixmap = new Pixmap(32, 32, Format.RGBA8888);
    pixmap.setColor(1, 1, 0, 0.5f);
    pixmap.fill();
    texture2 = new Texture(pixmap);
    pixmap.dispose();
    for (int i = 0; i < sprites.length; i += 6) {
        sprites[i] = (int) (Math.random() * (Gdx.graphics.getWidth() - 32));
        sprites[i + 1] = (int) (Math.random() * (Gdx.graphics.getHeight() - 32));
        sprites[i + 2] = 0;
        sprites[i + 3] = 0;
        sprites[i + 4] = 32;
        sprites[i + 5] = 32;
        sprites2[i] = (int) (Math.random() * (Gdx.graphics.getWidth() - 32));
        sprites2[i + 1] = (int) (Math.random() * (Gdx.graphics.getHeight() - 32));
        sprites2[i + 2] = 0;
        sprites2[i + 3] = 0;
        sprites2[i + 4] = 32;
        sprites2[i + 5] = 32;
    }
    for (int i = 0; i < SPRITES * 2; i++) {
        int x = (int) (Math.random() * (Gdx.graphics.getWidth() - 32));
        int y = (int) (Math.random() * (Gdx.graphics.getHeight() - 32));
        if (i >= SPRITES)
            sprites3[i] = new Sprite(texture2, 32, 32);
        else
            sprites3[i] = new Sprite(texture, 32, 32);
        sprites3[i].setPosition(x, y);
        sprites3[i].setOrigin(16, 16);
    }
    Gdx.input.setInputProcessor(this);
}
