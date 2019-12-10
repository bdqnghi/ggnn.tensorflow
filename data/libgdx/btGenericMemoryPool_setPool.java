public void setPool(java.nio.ByteBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btGenericMemoryPool_pool_set(swigCPtr, this, value);
    }
}
