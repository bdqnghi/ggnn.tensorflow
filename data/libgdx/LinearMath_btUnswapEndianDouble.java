public static double btUnswapEndianDouble(java.nio.ByteBuffer src) {
    assert src.isDirect() : "Buffer must be allocated direct.";
    {
        return LinearMathJNI.btUnswapEndianDouble(src);
    }
}
