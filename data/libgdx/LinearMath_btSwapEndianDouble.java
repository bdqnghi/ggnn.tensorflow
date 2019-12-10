public static void btSwapEndianDouble(double d, java.nio.ByteBuffer dst) {
    assert dst.isDirect() : "Buffer must be allocated direct.";
    {
        LinearMathJNI.btSwapEndianDouble(d, dst);
    }
}
