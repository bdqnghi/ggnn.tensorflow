public btVector3 getLocalCenter() {
    long cPtr = CollisionJNI.btConvexPolyhedron_localCenter_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
