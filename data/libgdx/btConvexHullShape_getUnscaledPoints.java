public btVector3 getUnscaledPoints() {
    long cPtr = CollisionJNI.btConvexHullShape_getUnscaledPoints__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
