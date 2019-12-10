/**
 * @return the scale factor on the Y axis (non-negative)
 */
public float getScaleY() {
    return (MathUtils.isZero(val[Matrix4.M10]) && MathUtils.isZero(val[Matrix4.M12])) ? Math.abs(val[Matrix4.M11]) : (float) Math.sqrt(getScaleYSquared());
}
