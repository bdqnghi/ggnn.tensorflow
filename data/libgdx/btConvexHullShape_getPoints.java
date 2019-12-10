public btVector3 getPoints() {
    long cPtr = CollisionJNI.btConvexHullShape_getPoints(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
