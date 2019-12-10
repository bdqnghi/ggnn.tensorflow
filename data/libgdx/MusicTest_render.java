@Override
public void render() {
    currentPosition = music.getPosition();
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    batch.draw(buttons, 0, 0);
    font.draw(batch, (int) currentPosition / 60 + ":" + (int) currentPosition % 60, 365, 35);
    batch.end();
    sliderUpdating = true;
    slider.setValue((currentPosition / songDuration) * 100f);
    sliderUpdating = false;
    stage.act();
    stage.draw();
    if (Gdx.input.justTouched()) {
        if (Gdx.input.getY() > Gdx.graphics.getHeight() - 64) {
            if (Gdx.input.getX() < 64) {
                music.play();
            }
            if (Gdx.input.getX() > 64 && Gdx.input.getX() < 128) {
                music.stop();
            }
            if (Gdx.input.getX() > 128 && Gdx.input.getX() < 192) {
                music.pause();
            }
        }
    }
}
