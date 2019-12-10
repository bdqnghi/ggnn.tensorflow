public void getVertices(java.nio.FloatBuffer vertices, int vertexSize, int posOffset, int normalOffset, java.nio.ShortBuffer indices, int indexOffset, int numVertices, java.nio.ShortBuffer indexMap, int indexMapOffset) {
    assert vertices.isDirect() : "Buffer must be allocated direct.";
    assert indices.isDirect() : "Buffer must be allocated direct.";
    assert indexMap.isDirect() : "Buffer must be allocated direct.";
    {
        SoftbodyJNI.btSoftBody_getVertices__SWIG_2(swigCPtr, this, vertices, vertexSize, posOffset, normalOffset, indices, indexOffset, numVertices, indexMap, indexMapOffset);
    }
}
