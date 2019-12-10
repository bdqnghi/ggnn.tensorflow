public btVector3 getExtents() {
    long cPtr = CollisionJNI.btConvexPolyhedron_extents_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
