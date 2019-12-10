public void setUniqueEdges(btVector3Array value) {
    CollisionJNI.btConvexPolyhedron_uniqueEdges_set(swigCPtr, this, btVector3Array.getCPtr(value), value);
}
