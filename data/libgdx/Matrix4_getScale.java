/**
 * @param scale The vector which will receive the (non-negative) scale components on each axis.
 * @return The provided vector for chaining.
 */
public Vector3 getScale(Vector3 scale) {
    return scale.set(getScaleX(), getScaleY(), getScaleZ());
}
