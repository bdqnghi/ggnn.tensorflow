/**
 * @return the scale factor on the X axis (non-negative)
 */
public float getScaleX() {
    return (MathUtils.isZero(val[Matrix4.M01]) && MathUtils.isZero(val[Matrix4.M02])) ? Math.abs(val[Matrix4.M00]) : (float) Math.sqrt(getScaleXSquared());
}
