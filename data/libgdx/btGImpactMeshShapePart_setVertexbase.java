public void setVertexbase(java.nio.ByteBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btGImpactMeshShapePart_TrimeshPrimitiveManager_vertexbase_set(swigCPtr, this, value);
    }
}
