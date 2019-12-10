public boolean testQuantizedBoxOverlapp(java.nio.IntBuffer quantizedMin, java.nio.IntBuffer quantizedMax) {
    assert quantizedMin.isDirect() : "Buffer must be allocated direct.";
    assert quantizedMax.isDirect() : "Buffer must be allocated direct.";
    {
        return CollisionJNI.BT_QUANTIZED_BVH_NODE_testQuantizedBoxOverlapp(swigCPtr, this, quantizedMin, quantizedMax);
    }
}
