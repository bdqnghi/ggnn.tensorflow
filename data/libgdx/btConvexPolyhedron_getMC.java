public btVector3 getMC() {
    long cPtr = CollisionJNI.btConvexPolyhedron_mC_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
