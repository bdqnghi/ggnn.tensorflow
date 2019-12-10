/**
 * Multiplies the obb transform by the given transform
 */
@Override
public void mulByTransform(Mat22 transform) {
    box.R.mulLocal(transform);
}
