public Matrix3 setToRotation(Vector3 axis, float cos, float sin) {
    float[] val = this.val;
    float oc = 1.0f - cos;
    val[M00] = oc * axis.x * axis.x + cos;
    val[M10] = oc * axis.x * axis.y - axis.z * sin;
    val[M20] = oc * axis.z * axis.x + axis.y * sin;
    val[M01] = oc * axis.x * axis.y + axis.z * sin;
    val[M11] = oc * axis.y * axis.y + cos;
    val[M21] = oc * axis.y * axis.z - axis.x * sin;
    val[M02] = oc * axis.z * axis.x - axis.y * sin;
    val[M12] = oc * axis.y * axis.z + axis.x * sin;
    val[M22] = oc * axis.z * axis.z + cos;
    return this;
}
