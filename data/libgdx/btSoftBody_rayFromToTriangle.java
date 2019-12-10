public static float rayFromToTriangle(Vector3 rayFrom, Vector3 rayTo, Vector3 rayNormalizedDirection, Vector3 a, Vector3 b, Vector3 c) {
    return SoftbodyJNI.btSoftBody_RayFromToCaster_rayFromToTriangle__SWIG_1(rayFrom, rayTo, rayNormalizedDirection, a, b, c);
}
