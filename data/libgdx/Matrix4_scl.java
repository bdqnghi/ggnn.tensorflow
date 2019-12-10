public Matrix4 scl(float scale) {
    val[M00] *= scale;
    val[M11] *= scale;
    val[M22] *= scale;
    return this;
}
