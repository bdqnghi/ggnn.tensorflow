public static void resetCursor() {
    ((GwtApplication) Gdx.app).graphics.canvas.getStyle().setProperty("cursor", "auto");
}
