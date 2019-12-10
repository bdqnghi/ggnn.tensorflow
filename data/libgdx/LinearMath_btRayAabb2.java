public static boolean btRayAabb2(Vector3 rayFrom, Vector3 rayInvDirection, long[] raySign, btVector3 bounds, SWIGTYPE_p_float tmin, float lambda_min, float lambda_max) {
    return LinearMathJNI.btRayAabb2(rayFrom, rayInvDirection, raySign, btVector3.getCPtr(bounds), bounds, SWIGTYPE_p_float.getCPtr(tmin), lambda_min, lambda_max);
}
