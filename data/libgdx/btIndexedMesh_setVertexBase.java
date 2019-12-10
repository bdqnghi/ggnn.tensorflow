public void setVertexBase(java.nio.FloatBuffer data) {
    assert data.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btIndexedMesh_setVertexBase(swigCPtr, this, data);
    }
}
