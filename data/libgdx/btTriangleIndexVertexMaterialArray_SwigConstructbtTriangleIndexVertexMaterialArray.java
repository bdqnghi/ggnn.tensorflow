static private long SwigConstructbtTriangleIndexVertexMaterialArray(int numTriangles, java.nio.IntBuffer triangleIndexBase, int triangleIndexStride, int numVertices, java.nio.FloatBuffer vertexBase, int vertexStride, int numMaterials, java.nio.ByteBuffer materialBase, int materialStride, java.nio.IntBuffer triangleMaterialsBase, int materialIndexStride) {
    assert triangleIndexBase.isDirect() : "Buffer must be allocated direct.";
    assert vertexBase.isDirect() : "Buffer must be allocated direct.";
    assert materialBase.isDirect() : "Buffer must be allocated direct.";
    assert triangleMaterialsBase.isDirect() : "Buffer must be allocated direct.";
    return CollisionJNI.new_btTriangleIndexVertexMaterialArray__SWIG_1(numTriangles, triangleIndexBase, triangleIndexStride, numVertices, vertexBase, vertexStride, numMaterials, materialBase, materialStride, triangleMaterialsBase, materialIndexStride);
}
