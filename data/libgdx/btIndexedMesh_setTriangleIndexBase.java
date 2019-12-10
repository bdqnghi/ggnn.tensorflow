public void setTriangleIndexBase(java.nio.ShortBuffer data) {
    assert data.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btIndexedMesh_setTriangleIndexBase(swigCPtr, this, data);
    }
}
