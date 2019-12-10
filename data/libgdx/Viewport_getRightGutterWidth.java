/**
 * Returns the right gutter (black bar) width in screen coordinates.
 */
public int getRightGutterWidth() {
    return Gdx.graphics.getWidth() - (screenX + screenWidth);
}
