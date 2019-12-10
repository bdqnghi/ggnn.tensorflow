public static boolean btRayAabb(Vector3 rayFrom, Vector3 rayTo, Vector3 aabbMin, Vector3 aabbMax, SWIGTYPE_p_float param, Vector3 normal) {
    return LinearMathJNI.btRayAabb(rayFrom, rayTo, aabbMin, aabbMax, SWIGTYPE_p_float.getCPtr(param), normal);
}
