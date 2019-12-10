/**
 * Sets the components from the given spherical coordinate
 * @param azimuthalAngle The angle between x-axis in radians [0, 2pi]
 * @param polarAngle The angle between z-axis in radians [0, pi]
 * @return This vector for chaining
 */
public Vector3 setFromSpherical(float azimuthalAngle, float polarAngle) {
    float cosPolar = MathUtils.cos(polarAngle);
    float sinPolar = MathUtils.sin(polarAngle);
    float cosAzim = MathUtils.cos(azimuthalAngle);
    float sinAzim = MathUtils.sin(azimuthalAngle);
    return this.set(cosAzim * sinPolar, sinAzim * sinPolar, cosPolar);
}
