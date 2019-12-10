public void getIndices(java.nio.ShortBuffer buffer, int triangleCount) {
    assert buffer.isDirect() : "Buffer must be allocated direct.";
    {
        SoftbodyJNI.btSoftBody_getIndices(swigCPtr, this, buffer, triangleCount);
    }
}
