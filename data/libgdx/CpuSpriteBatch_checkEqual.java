private static boolean checkEqual(Matrix4 matrix, Affine2 affine) {
    final float[] val = matrix.getValues();
    // matrix is assumed to be 2D transformation
    return (val[Matrix4.M00] == affine.m00 && val[Matrix4.M10] == affine.m10 && val[Matrix4.M01] == affine.m01 && val[Matrix4.M11] == affine.m11 && val[Matrix4.M03] == affine.m02 && val[Matrix4.M13] == affine.m12);
}
