public int findOrAddVertex(Vector3 vertex, boolean removeDuplicateVertices) {
    return CollisionJNI.btTriangleMesh_findOrAddVertex(swigCPtr, this, vertex, removeDuplicateVertices);
}
