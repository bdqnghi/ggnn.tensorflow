@Override
public void render() {
    Gdx.gl.glClearColor(1, 1, 1, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    spriteBatch.begin();
    int x = 10;
    x += drawFont(regularFont, "Regular font\nNearest filter", false, false, 0, x);
    x += drawFont(regularFont, "Regular font\nLinear filter", true, false, 0, x);
    x += drawFont(regularFont, "Regular font\nCustom shader", true, true, 1.0f, x);
    x += drawFont(distanceFieldFont, "Distance field\nCustom shader", true, true, 1 / 8f, x);
    x += drawFont(distanceFieldFont, "Distance field\nShowing distance field", false, false, 0, x);
    spriteBatch.end();
}
