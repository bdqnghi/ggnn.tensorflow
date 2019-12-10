public Vector2 getScale(Vector2 scale) {
    float[] val = this.val;
    scale.x = (float) Math.sqrt(val[M00] * val[M00] + val[M01] * val[M01]);
    scale.y = (float) Math.sqrt(val[M10] * val[M10] + val[M11] * val[M11]);
    return scale;
}
