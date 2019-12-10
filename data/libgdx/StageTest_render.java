@Override
public void render() {
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    if (Gdx.input.isTouched()) {
        stage.screenToStageCoordinates(stageCoords.set(Gdx.input.getX(), Gdx.input.getY()));
        Actor actor = stage.hit(stageCoords.x, stageCoords.y, true);
        if (actor != null)
            actor.setColor((float) Math.random(), (float) Math.random(), (float) Math.random(), 0.5f + 0.5f * (float) Math.random());
    }
    Array<Actor> actors = stage.getActors();
    int len = actors.size;
    if (rotateSprites) {
        for (int i = 0; i < len; i++) actors.get(i).rotateBy(Gdx.graphics.getDeltaTime() * 10);
    }
    scale += vScale * Gdx.graphics.getDeltaTime();
    if (scale > 1) {
        scale = 1;
        vScale = -vScale;
    }
    if (scale < 0.5f) {
        scale = 0.5f;
        vScale = -vScale;
    }
    len = sprites.size;
    for (int i = 0; i < len; i++) {
        Actor sprite = sprites.get(i);
        if (rotateSprites)
            sprite.rotateBy(-40 * Gdx.graphics.getDeltaTime());
        else
            sprite.setRotation(0);
        if (scaleSprites) {
            sprite.setScale(scale);
        } else {
            sprite.setScale(1);
        }
    }
    stage.draw();
    renderer.begin(ShapeType.Point);
    renderer.setColor(1, 0, 0, 1);
    len = actors.size;
    for (int i = 0; i < len; i++) {
        Group group = (Group) actors.get(i);
        renderer.point(group.getX() + group.getOriginX(), group.getY() + group.getOriginY(), 0);
    }
    renderer.end();
    fps.setText("fps: " + Gdx.graphics.getFramesPerSecond() + ", actors " + sprites.size + ", groups " + sprites.size);
    ui.draw();
}
