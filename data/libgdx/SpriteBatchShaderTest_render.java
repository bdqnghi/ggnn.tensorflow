@Override
public void render() {
    GL20 gl = Gdx.gl20;
    gl.glClearColor(0.7f, 0.7f, 0.7f, 1);
    gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    float begin = 0;
    float end = 0;
    float draw1 = 0;
    float draw2 = 0;
    float drawText = 0;
    long start = TimeUtils.nanoTime();
    spriteBatch.begin();
    begin = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    int len = coords.length;
    start = TimeUtils.nanoTime();
    for (int i = 0; i < len; i += 2) spriteBatch.draw(texture, coords[i], coords[i + 1], 0, 0, 32, 32);
    draw1 = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    spriteBatch.setColor(col);
    for (int i = 0; i < coords2.length; i += 2) spriteBatch.draw(texture2, coords2[i], coords2[i + 1], 0, 0, 32, 32);
    draw2 = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    // spriteBatch.drawText(font, "Question?", 100, 300, Color.RED);
    // spriteBatch.drawText(font, "and another this is a test", 200, 100, Color.WHITE);
    // spriteBatch.drawText(font, "all hail and another this is a test", 200, 200, Color.WHITE);
    drawText = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    start = TimeUtils.nanoTime();
    spriteBatch.end();
    end = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    if (TimeUtils.nanoTime() - startTime > 1000000000) {
        Gdx.app.log("SpriteBatch", "fps: " + frames + ", render calls: " + spriteBatch.renderCalls + ", " + begin + ", " + draw1 + ", " + draw2 + ", " + drawText + ", " + end);
        frames = 0;
        startTime = TimeUtils.nanoTime();
    }
    frames++;
}
