public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    // Draw rects.
    shapes.begin(ShapeType.Line);
    float x = 0, y = Gdx.graphics.getHeight() - font.getRegion().getRegionHeight() - 1;
    for (int i = 0, n = font.getRegions().size; i < n; i++) {
        TextureRegion region = font.getRegions().get(i);
        shapes.rect(x, y, region.getRegionWidth(), region.getRegionHeight());
        x += region.getRegionWidth() + 2;
    }
    shapes.rect(10, 250, Gdx.graphics.getWidth() - 20, -240);
    shapes.end();
    batch.begin();
    x = 0;
    for (int i = 0, n = font.getRegions().size; i < n; i++) {
        TextureRegion region = font.getRegions().get(i);
        batch.draw(region, x, y);
        x += region.getRegionWidth() + 2;
    }
    // Shows kerning.
    font.draw(batch, "LYA", 10, 300);
    font.draw(batch, "hello world", 100, 300);
    font.draw(batch, "动画能给游戏带来生机和灵气。我们相信创作一段美妙的动画，不仅需要强大的软件工具，更需要一套牛 B 的工作流程。" + // 
    "Spine专注于此，为您创建惊艳的骨骼动画，并将其整合到游戏当中，提供了一套高效的工作流程。", // 
    10, // 
    250, Gdx.graphics.getWidth() - 20, Align.left, true);
    batch.end();
}
