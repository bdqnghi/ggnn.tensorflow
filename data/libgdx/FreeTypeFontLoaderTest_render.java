@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    if (manager.update() && manager.isLoaded("size10.ttf")) {
        batch.begin();
        manager.get("size10.ttf", BitmapFont.class).draw(batch, "First font!", 20, 20);
        manager.get("size20.ttf", BitmapFont.class).draw(batch, "Second font!", 20, 50);
        manager.get("data/default.fnt", BitmapFont.class).draw(batch, "Default font!", 20, 100);
        batch.end();
    }
    if (Gdx.input.justTouched() && manager.isLoaded("size10.ttf")) {
        // unload all the things and check if they really get disposed properly
        manager.unload("size10.ttf");
        manager.finishLoading();
        if (manager.isLoaded("size10.ttf"))
            throw new RuntimeException("broken");
        if (!manager.isLoaded("size20.ttf"))
            throw new RuntimeException("broken");
        manager.unload("size20.ttf");
        manager.finishLoading();
        if (manager.isLoaded("size10.ttf"))
            throw new RuntimeException("broken");
        if (manager.isLoaded("size20.ttf"))
            throw new RuntimeException("broken");
    }
}
