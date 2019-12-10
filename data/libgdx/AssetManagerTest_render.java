public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    boolean result = manager.update();
    if (result) {
        if (!diagnosed) {
            diagnosed = true;
            System.out.println("took: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
            elapsed = 0;
        } else {
            elapsed += Gdx.graphics.getRawDeltaTime();
            if (elapsed > 0.2f) {
                unload();
                load();
                diagnosed = false;
                reloads++;
            }
        }
    }
    frame++;
    batch.begin();
    if (manager.isLoaded("data/animation.png"))
        batch.draw(manager.get("data/animation.png", Texture.class), 100, 100);
    if (manager.isLoaded("data/verdana39.png"))
        batch.draw(manager.get("data/verdana39.png", Texture.class), 300, 100);
    if (manager.isLoaded("data/pack"))
        batch.draw(manager.get("data/pack", TextureAtlas.class).findRegion("particle-star"), 164, 100);
    if (manager.isLoaded("data/verdana39.fnt"))
        manager.get("data/verdana39.fnt", BitmapFont.class).draw(batch, "This is a test", 100, 80);
    if (manager.isLoaded("data/multipagefont.fnt"))
        manager.get("data/multipagefont.fnt", BitmapFont.class).draw(batch, "This is a test qpRPN multi page!", 100, 80);
    // TileMapRenderer.class).render();
    if (manager.isLoaded("data/i18n/message2"))
        font.draw(batch, manager.get("data/i18n/message2", I18NBundle.class).get("msg"), 100, 400);
    font.draw(batch, "loaded: " + manager.getProgress() + ", reloads: " + reloads, 0, 30);
    batch.end();
// if(Gdx.input.justTouched()) {
// Texture.invalidateAllTextures(Gdx.app);
// diagnosed = false;
// unload();
// load();
// }
}
