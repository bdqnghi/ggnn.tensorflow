public btVector3 getClosestPointInB() {
    long cPtr = CollisionJNI.btStorageResult_closestPointInB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
