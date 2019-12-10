public static float CalculateUV(int resx, int resy, int ix, int iy, int id) {
    return SoftbodyJNI.btSoftBodyHelpers_CalculateUV(resx, resy, ix, iy, id);
}
