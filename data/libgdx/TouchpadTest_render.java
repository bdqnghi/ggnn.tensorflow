public void render() {
    // System.out.println(touchpad.getKnobPercentX() + " " + touchpad.getKnobPercentY());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    stage.act(Gdx.graphics.getDeltaTime());
    stage.draw();
}
