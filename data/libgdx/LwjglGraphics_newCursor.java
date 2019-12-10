@Override
public com.badlogic.gdx.graphics.Cursor newCursor(Pixmap pixmap, int xHotspot, int yHotspot) {
    return new LwjglCursor(pixmap, xHotspot, yHotspot);
}
