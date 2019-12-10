public static btSparseSdf3.IntFrac Decompose(float x) {
    return new btSparseSdf3.IntFrac(SoftbodyJNI.btSparseSdf3_Decompose(x), true);
}
