@Override
public void draw3dText(Vector3 location, String textString) {
    if (spriteBatch == null) {
        spriteBatch = new SpriteBatch();
    }
    if (font == null) {
        font = new BitmapFont();
    }
    // this check is necessary to avoid "mirrored" instances of the text
    if (camera.frustum.pointInFrustum(location)) {
        if (viewport != null) {
            camera.project(location, viewport.getScreenX(), viewport.getScreenY(), viewport.getScreenWidth(), viewport.getScreenHeight());
        } else {
            camera.project(location);
        }
        shapeRenderer.end();
        spriteBatch.begin();
        // the text will be centered on the position
        font.draw(spriteBatch, textString, location.x, location.y, 0, textString.length(), 0, Align.center, false);
        spriteBatch.end();
        shapeRenderer.begin(ShapeType.Line);
    }
}
