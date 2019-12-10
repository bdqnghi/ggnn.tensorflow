/**
 * @return the squared scale factor on the Y axis
 */
public float getScaleYSquared() {
    return val[Matrix4.M10] * val[Matrix4.M10] + val[Matrix4.M11] * val[Matrix4.M11] + val[Matrix4.M12] * val[Matrix4.M12];
}
