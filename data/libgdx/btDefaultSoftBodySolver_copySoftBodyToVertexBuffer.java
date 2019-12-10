public void copySoftBodyToVertexBuffer(btSoftBody softBody, btVertexBufferDescriptor vertexBuffer) {
    SoftbodyJNI.btDefaultSoftBodySolver_copySoftBodyToVertexBuffer(swigCPtr, this, btSoftBody.getCPtr(softBody), softBody, btVertexBufferDescriptor.getCPtr(vertexBuffer), vertexBuffer);
}
