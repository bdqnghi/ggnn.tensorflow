@Override
public void dispose() {
    super.dispose();
    if (ownsShapeRenderer) {
        shapeRenderer.dispose();
    }
    if (ownsSpriteBatch && spriteBatch != null) {
        spriteBatch.dispose();
    }
    if (ownsFont && font != null) {
        font.dispose();
    }
}
