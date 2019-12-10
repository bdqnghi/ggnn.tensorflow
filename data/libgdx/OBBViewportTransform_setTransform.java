/**
 * Sets the transform of the viewport. Transforms about the center.
 */
public void setTransform(Mat22 transform) {
    box.R.set(transform);
}
