public void quantizeWithClamp(java.nio.IntBuffer out, Vector3 point2, int isMax) {
    assert out.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btQuantizedBvh_quantizeWithClamp(swigCPtr, this, out, point2, isMax);
    }
}
