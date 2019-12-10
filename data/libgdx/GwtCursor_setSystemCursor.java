@Override
public void setSystemCursor() {
    ((GwtApplication) Gdx.app).graphics.canvas.getStyle().setProperty("cursor", cssCursorProperty);
}
