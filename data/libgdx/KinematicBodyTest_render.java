public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    world.step(Math.min(0.032f, Gdx.graphics.getDeltaTime()), 3, 4);
    cam.update();
    renderer.render(world, cam.combined);
}
