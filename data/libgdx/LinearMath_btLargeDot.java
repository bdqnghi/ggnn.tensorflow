public static float btLargeDot(java.nio.FloatBuffer a, java.nio.FloatBuffer b, int n) {
    assert a.isDirect() : "Buffer must be allocated direct.";
    assert b.isDirect() : "Buffer must be allocated direct.";
    {
        return LinearMathJNI.btLargeDot(a, b, n);
    }
}
