/**
 * @return the scale factor on the X axis (non-negative)
 */
public float getScaleZ() {
    return (MathUtils.isZero(val[Matrix4.M20]) && MathUtils.isZero(val[Matrix4.M21])) ? Math.abs(val[Matrix4.M22]) : (float) Math.sqrt(getScaleZSquared());
}
