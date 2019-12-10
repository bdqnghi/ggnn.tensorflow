public void getVertex(int vertex_index, Vector3 vertex) {
    CollisionJNI.btGImpactMeshShapePart_getVertex(swigCPtr, this, vertex_index, vertex);
}
