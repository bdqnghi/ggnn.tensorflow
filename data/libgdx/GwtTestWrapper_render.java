public void render() {
    if (test == null) {
        Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
        Gdx.gl.glClearColor(0, 0, 0, 0);
        Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
        ui.act(Gdx.graphics.getDeltaTime());
        ui.draw();
    } else {
        if (dispose) {
            test.pause();
            test.dispose();
            test = null;
            Gdx.graphics.setVSync(true);
            InputWrapper wrapper = ((InputWrapper) Gdx.input);
            wrapper.multiplexer.addProcessor(ui);
            wrapper.multiplexer.removeProcessor(wrapper.lastProcessor);
            wrapper.lastProcessor = null;
            dispose = false;
        } else {
            test.render();
        }
    }
}
