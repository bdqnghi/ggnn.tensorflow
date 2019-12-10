/**
 * Returns the top gutter (black bar) height in screen coordinates.
 */
public int getTopGutterHeight() {
    return Gdx.graphics.getHeight() - (screenY + screenHeight);
}
