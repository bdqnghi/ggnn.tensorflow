public btVector3 getVertices() {
    long cPtr = CollisionJNI.btPrimitiveTriangle_vertices_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
