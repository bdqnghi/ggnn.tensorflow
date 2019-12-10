public btVector3Array getUniqueEdges() {
    long cPtr = CollisionJNI.btConvexPolyhedron_uniqueEdges_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3Array(cPtr, false);
}
