public void setHashTablePtr(java.nio.IntBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btTriangleInfoMapData_hashTablePtr_set(swigCPtr, this, value);
    }
}
