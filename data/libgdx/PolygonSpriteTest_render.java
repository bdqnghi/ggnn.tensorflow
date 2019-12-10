@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
    camera.update();
    batch.setProjectionMatrix(camera.combined);
    batch.begin();
    for (int i = 0; i < sprites.size; i++) {
        PolygonSprite sprite = sprites.get(i);
        sprite.rotate(45 * Gdx.graphics.getDeltaTime());
        sprite.translateX(10 * Gdx.graphics.getDeltaTime());
        if (sprite.getX() > 450)
            sprite.setX(-50);
        sprite.draw(batch);
    }
    batch.end();
    // Some debug rendering, bounding box & origin of one sprite
    renderer.setProjectionMatrix(camera.combined);
    renderer.setColor(Color.GREEN);
    renderer.begin(ShapeType.Line);
    PolygonSprite sprite = sprites.get(49);
    bounds = sprite.getBoundingRectangle();
    renderer.rect(bounds.x, bounds.y, bounds.width, bounds.height);
    renderer.end();
    renderer.begin(ShapeType.Filled);
    renderer.circle(sprite.getX() + sprite.getOriginX(), sprite.getY() + sprite.getOriginY(), 4);
    renderer.end();
}
