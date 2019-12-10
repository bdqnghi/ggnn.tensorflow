public btVector3 getMin() {
    long cPtr = CollisionJNI.btAABB_min_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
