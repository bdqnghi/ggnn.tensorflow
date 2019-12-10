static private long SwigConstructbtCPUVertexBufferDescriptor(java.nio.FloatBuffer basePointer, int vertexOffset, int vertexStride, int normalOffset, int normalStride) {
    assert basePointer.isDirect() : "Buffer must be allocated direct.";
    return SoftbodyJNI.new_btCPUVertexBufferDescriptor__SWIG_1(basePointer, vertexOffset, vertexStride, normalOffset, normalStride);
}
