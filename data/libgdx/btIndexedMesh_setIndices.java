public void setIndices(java.nio.ShortBuffer indices, int indexOffset, int indexCount) {
    assert indices.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btIndexedMesh_setIndices(swigCPtr, this, indices, indexOffset, indexCount);
    }
}
