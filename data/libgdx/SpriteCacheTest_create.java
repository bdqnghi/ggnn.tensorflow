@Override
public void create() {
    spriteCache = new SpriteCache(1000, true);
    texture = new Texture(Gdx.files.internal("data/badlogicsmall.jpg"));
    texture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    Pixmap pixmap = new Pixmap(32, 32, Format.RGBA8888);
    pixmap.setColor(1, 1, 0, 0.5f);
    pixmap.fill();
    texture2 = new Texture(pixmap);
    pixmap.dispose();
    sprites = new float[SPRITES * 6];
    sprites2 = new float[SPRITES * 6];
    Sprite[] sprites3 = new Sprite[SPRITES * 2];
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
    float scale = 1;
    float angle = 15;
    spriteCache.beginCache();
    for (int i = 0; i < sprites2.length; i += 6) spriteCache.add(texture2, sprites2[i], sprites2[i + 1], 16, 16, 32, 32, scale, scale, angle, 0, 0, 32, 32, false, false);
    for (int i = 0; i < sprites.length; i += 6) spriteCache.add(texture, sprites[i], sprites[i + 1], 16, 16, 32, 32, scale, scale, angle, 0, 0, 32, 32, false, false);
    normalCacheID = spriteCache.endCache();
    angle = -15;
    spriteCache.beginCache();
    for (int i = SPRITES; i < SPRITES << 1; i++) {
        sprites3[i].setRotation(angle);
        sprites3[i].setScale(scale);
        spriteCache.add(sprites3[i]);
    }
    for (int i = 0; i < SPRITES; i++) {
        sprites3[i].setRotation(angle);
        sprites3[i].setScale(scale);
        spriteCache.add(sprites3[i]);
    }
    spriteCacheID = spriteCache.endCache();
    Gdx.input.setInputProcessor(this);
}
