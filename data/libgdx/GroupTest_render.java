public void render() {
    // Vary the transforms to exercise the different code paths.
    group2.setBounds(150, 150, 150, 150);
    group2.setRotation(45);
    group2.setOrigin(150, 150);
    group2.setScale(1.25f);
    group1.setBounds(150, 150, 50, 50);
    group1.setRotation(45);
    group1.setOrigin(25, 25);
    group1.setScale(1.3f);
    Gdx.gl.glClearColor(0, 0, 0, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    stage.draw();
    renderer.setProjectionMatrix(batch.getProjectionMatrix());
    renderer.begin(ShapeType.Filled);
    if (MathUtils.randomBoolean()) {
        // So we see when they are drawn on top of each other (which should be always).
        renderer.setColor(Color.GREEN);
        renderer.circle(group1.toScreenCoordinates.x, Gdx.graphics.getHeight() - group1.toScreenCoordinates.y, 5);
        renderer.setColor(Color.RED);
        renderer.circle(group1.localToParentCoordinates.x, Gdx.graphics.getHeight() - group1.localToParentCoordinates.y, 5);
    } else {
        renderer.setColor(Color.RED);
        renderer.circle(group1.localToParentCoordinates.x, Gdx.graphics.getHeight() - group1.localToParentCoordinates.y, 5);
        renderer.setColor(Color.GREEN);
        renderer.circle(group1.toScreenCoordinates.x, Gdx.graphics.getHeight() - group1.toScreenCoordinates.y, 5);
    }
    renderer.end();
}
