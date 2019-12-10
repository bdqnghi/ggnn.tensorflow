@Override
public Vector3 setToRandomDirection() {
    float u = MathUtils.random();
    float v = MathUtils.random();
    // azimuthal angle
    float theta = MathUtils.PI2 * u;
    // polar angle
    float phi = (float) Math.acos(2f * v - 1f);
    return this.setFromSpherical(theta, phi);
}
