@Override
public void render() {
    final int screenWidth = Gdx.graphics.getWidth();
    final int screenHeight = Gdx.graphics.getHeight();
    Gdx.gl.glClearColor(0, 0, 0, 0);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    timePassed += Gdx.graphics.getDeltaTime();
    b.begin();
    final int sz = ninePatches.size;
    final int XGAP = 10;
    final int pheight = (int) ((screenHeight * 0.5f) / ((sz + 1) / 2));
    int x = XGAP;
    int y = 10;
    // Test that batch color is applied to NinePatch
    if (timePassed < 2) {
        b.setColor(1, 1, 1, Interpolation.sine.apply(timePassed / 2f));
    }
    // Test that the various nine patches render
    for (int i = 0; i < sz; i += 2) {
        int pwidth = (int) (0.44f * screenWidth);
        final NinePatch np1 = ninePatches.get(i).ninePatch;
        np1.draw(b, x, y, pwidth, pheight);
        if (i + 1 < sz) {
            final NinePatch np2 = ninePatches.get(i + 1).ninePatch;
            final int x2 = x + pwidth + XGAP;
            final int pwidth2 = screenWidth - XGAP - x2;
            np2.draw(b, x2, y, pwidth2, pheight);
        }
        y += pheight + 2;
    }
    // Dim a np by setting its color. Also test sending same np to batch twice
    NinePatch np = ninePatches.get(0).ninePatch;
    oldColor.set(np.getColor());
    filterColor.set(0.3f, 0.3f, 0.3f, 1.0f);
    np.setColor(filterColor);
    np.draw(b, x, y, 100, 30);
    np.setColor(oldColor);
    b.end();
}
