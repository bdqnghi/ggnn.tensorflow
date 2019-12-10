public void setNodeIndices(java.nio.IntBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        SoftbodyJNI.SoftBodyClusterData_nodeIndices_set(swigCPtr, this, value);
    }
}
