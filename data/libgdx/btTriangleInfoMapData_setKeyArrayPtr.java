public void setKeyArrayPtr(java.nio.IntBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btTriangleInfoMapData_keyArrayPtr_set(swigCPtr, this, value);
    }
}
