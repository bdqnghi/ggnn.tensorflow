@Override
public boolean keyDown(int keycode) {
    Gdx.app.log("Input Test", "key down: " + keycode);
    if (keycode == Keys.G)
        Gdx.input.setCursorCatched(!Gdx.input.isCursorCatched());
    return false;
}
