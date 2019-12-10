/**
 * @return the squared scale factor on the Z axis
 */
public float getScaleZSquared() {
    return val[Matrix4.M20] * val[Matrix4.M20] + val[Matrix4.M21] * val[Matrix4.M21] + val[Matrix4.M22] * val[Matrix4.M22];
}
