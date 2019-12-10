/**
 * @return the squared scale factor on the X axis
 */
public float getScaleXSquared() {
    return val[Matrix4.M00] * val[Matrix4.M00] + val[Matrix4.M01] * val[Matrix4.M01] + val[Matrix4.M02] * val[Matrix4.M02];
}
