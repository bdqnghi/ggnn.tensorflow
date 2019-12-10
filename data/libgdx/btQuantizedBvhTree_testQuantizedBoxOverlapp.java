public boolean testQuantizedBoxOverlapp(int node_index, java.nio.IntBuffer quantizedMin, java.nio.IntBuffer quantizedMax) {
    assert quantizedMin.isDirect() : "Buffer must be allocated direct.";
    assert quantizedMax.isDirect() : "Buffer must be allocated direct.";
    {
        return CollisionJNI.btQuantizedBvhTree_testQuantizedBoxOverlapp(swigCPtr, this, node_index, quantizedMin, quantizedMax);
    }
}
