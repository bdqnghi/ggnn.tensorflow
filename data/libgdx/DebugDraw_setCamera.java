/**
 * @param x
 * @param y
 * @param scale
 * @deprecated use the viewport transform in {@link #getViewportTranform()}
 */
public void setCamera(float x, float y, float scale) {
    viewportTransform.setCamera(x, y, scale);
}
