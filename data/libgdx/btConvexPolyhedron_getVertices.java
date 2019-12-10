public btVector3Array getVertices() {
    long cPtr = CollisionJNI.btConvexPolyhedron_vertices_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3Array(cPtr, false);
}
