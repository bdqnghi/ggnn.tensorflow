@Override
public Cursor newCursor(Pixmap pixmap, int xHotspot, int yHotspot) {
    return new GwtCursor(pixmap, xHotspot, yHotspot);
}
