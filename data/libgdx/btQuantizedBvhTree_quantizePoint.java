public void quantizePoint(java.nio.IntBuffer quantizedpoint, Vector3 point) {
    assert quantizedpoint.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btQuantizedBvhTree_quantizePoint(swigCPtr, this, quantizedpoint, point);
    }
}
