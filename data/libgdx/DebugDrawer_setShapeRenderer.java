/**
 * Switches the {@link ShapeRenderer}. The given shape renderer won't be disposed when {@link #dispose()} is called.
 */
public void setShapeRenderer(ShapeRenderer shapeRenderer) {
    if (ownsShapeRenderer) {
        this.shapeRenderer.dispose();
    }
    this.shapeRenderer = shapeRenderer;
    ownsShapeRenderer = false;
}
