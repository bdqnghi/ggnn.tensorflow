public void setVertices(java.nio.FloatBuffer vertices, int sizeInBytesOfEachVertex, int vertexCount, int positionOffsetInBytes) {
    assert vertices.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btIndexedMesh_setVertices(swigCPtr, this, vertices, sizeInBytesOfEachVertex, vertexCount, positionOffsetInBytes);
    }
}
