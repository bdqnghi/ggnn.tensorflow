@Override
public void render() {
    if (loading && assets.update()) {
        loading = false;
        onLoaded();
    }
    inputController.update();
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glClearColor(bgColor.r, bgColor.g, bgColor.b, bgColor.a);
    render(instances);
}
