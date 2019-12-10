public static long testQuantizedAabbAgainstQuantizedAabb(java.nio.IntBuffer aabbMin1, java.nio.IntBuffer aabbMax1, java.nio.IntBuffer aabbMin2, java.nio.IntBuffer aabbMax2) {
    assert aabbMin1.isDirect() : "Buffer must be allocated direct.";
    assert aabbMax1.isDirect() : "Buffer must be allocated direct.";
    assert aabbMin2.isDirect() : "Buffer must be allocated direct.";
    assert aabbMax2.isDirect() : "Buffer must be allocated direct.";
    {
        return LinearMathJNI.testQuantizedAabbAgainstQuantizedAabb(aabbMin1, aabbMax1, aabbMin2, aabbMax2);
    }
}
