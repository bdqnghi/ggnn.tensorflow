public void quantize(java.nio.IntBuffer out, Vector3 point, int isMax) {
    assert out.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btQuantizedBvh_quantize(swigCPtr, this, out, point, isMax);
    }
}
