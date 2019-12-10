public static Matrix3 MassMatrix(float im, Matrix3 iwi, Vector3 r) {
    return SoftbodyJNI.MassMatrix(im, iwi, r);
}
