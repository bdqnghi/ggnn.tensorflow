public btVector3 getMax() {
    long cPtr = CollisionJNI.btAABB_max_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
