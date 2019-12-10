public void setIndexbase(java.nio.ByteBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btGImpactMeshShapePart_TrimeshPrimitiveManager_indexbase_set(swigCPtr, this, value);
    }
}
