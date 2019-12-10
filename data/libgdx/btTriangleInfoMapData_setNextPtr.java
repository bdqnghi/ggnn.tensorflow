public void setNextPtr(java.nio.IntBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btTriangleInfoMapData_nextPtr_set(swigCPtr, this, value);
    }
}
