public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    float width = (int) (Gdx.graphics.getPpcX() * 2);
    float height = (int) (Gdx.graphics.getPpcY() * 1);
    batch.draw(texture, 10, 100, width, height, 0, 0, 64, 32, false, false);
    font.draw(batch, "button is 2x1 cm (" + width + "x" + height + "px), ppi: (" + Gdx.graphics.getPpiX() + "," + Gdx.graphics.getPpiY() + "), ppc: (" + Gdx.graphics.getPpcX() + "," + Gdx.graphics.getPpcY() + ")", 10, 50);
    batch.end();
}
