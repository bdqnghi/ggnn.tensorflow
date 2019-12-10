public void create() {
    texture = new Texture(Gdx.files.internal("data/badlogicsmall.jpg"));
    Sprite sprite = new Sprite(texture);
    sprite.setSize(tileSize, tileSize);
    cache = new SpriteCache(1000, false);
    for (int y = 0; y < tileMapHeight; y++) {
        cache.beginCache();
        for (int x = 0; x < tileMapWidth; x++) {
            sprite.setPosition(x * tileSize, y * tileSize);
            cache.add(sprite);
        }
        cache.endCache();
        sprite.rotate90(true);
    }
}
