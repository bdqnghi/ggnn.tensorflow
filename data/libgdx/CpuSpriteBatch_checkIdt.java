private static boolean checkIdt(Matrix4 matrix) {
    final float[] val = matrix.getValues();
    // matrix is assumed to be 2D transformation
    return (val[Matrix4.M00] == 1 && val[Matrix4.M10] == 0 && val[Matrix4.M01] == 0 && val[Matrix4.M11] == 1 && val[Matrix4.M03] == 0 && val[Matrix4.M13] == 0);
}
