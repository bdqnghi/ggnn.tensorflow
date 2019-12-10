public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    font.draw(batch, message, 10, 40);
    batch.end();
    if (Gdx.input.justTouched()) {
        Gdx.input.getTextInput(new TextInputListener() {

            @Override
            public void input(String text) {
                message = "message: " + text + ", touch screen for new dialog";
            }

            @Override
            public void canceled() {
                message = "cancled by user";
            }
        }, "enter something funny", "funny", "something funny");
    }
}
