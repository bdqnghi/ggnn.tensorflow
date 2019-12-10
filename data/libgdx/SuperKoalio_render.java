@Override
public void render() {
    // clear the screen
    Gdx.gl.glClearColor(0.7f, 0.7f, 1.0f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    // get the delta time
    float deltaTime = Gdx.graphics.getDeltaTime();
    // update the koala (process input, collision detection, position update)
    updateKoala(deltaTime);
    // let the camera follow the koala, x-axis only
    camera.position.x = koala.position.x;
    camera.update();
    // set the tile map rendere view based on what the
    // camera sees and render the map
    renderer.setView(camera);
    renderer.render();
    // render the koala
    renderKoala(deltaTime);
}
