public float getRotation() {
    return MathUtils.radiansToDegrees * (float) Math.atan2(val[M10], val[M00]);
}
