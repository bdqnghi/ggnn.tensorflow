public static float Lerp(float a, float b, float t) {
    return SoftbodyJNI.btSparseSdf3_Lerp(a, b, t);
}
