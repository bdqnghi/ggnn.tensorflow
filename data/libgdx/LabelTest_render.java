@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    stage.act(Math.min(Gdx.graphics.getDeltaTime(), 1 / 30f));
    stage.draw();
    float x = 40, y = 40;
    BitmapFont font = skin.getFont("default-font");
    batch.begin();
    font.draw(batch, "The quick brown fox jumped over the lazy cow.", x, y);
    batch.end();
    drawLine(x, y - font.getDescent(), x + 1000, y - font.getDescent());
    drawLine(x, y - font.getCapHeight() + font.getDescent(), x + 1000, y - font.getCapHeight() + font.getDescent());
}
