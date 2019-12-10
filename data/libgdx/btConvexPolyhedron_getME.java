public btVector3 getME() {
    long cPtr = CollisionJNI.btConvexPolyhedron_mE_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
