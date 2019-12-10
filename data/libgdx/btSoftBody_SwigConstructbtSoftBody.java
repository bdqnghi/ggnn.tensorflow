static private long SwigConstructbtSoftBody(btSoftBodyWorldInfo worldInfo, java.nio.FloatBuffer vertices, int vertexSize, int posOffset, int normalOffset, java.nio.ShortBuffer indices, int indexOffset, int numVertices, java.nio.ShortBuffer indexMap, int indexMapOffset) {
    assert vertices.isDirect() : "Buffer must be allocated direct.";
    assert indices.isDirect() : "Buffer must be allocated direct.";
    assert indexMap.isDirect() : "Buffer must be allocated direct.";
    return SoftbodyJNI.new_btSoftBody__SWIG_2(btSoftBodyWorldInfo.getCPtr(worldInfo), worldInfo, vertices, vertexSize, posOffset, normalOffset, indices, indexOffset, numVertices, indexMap, indexMapOffset);
}
