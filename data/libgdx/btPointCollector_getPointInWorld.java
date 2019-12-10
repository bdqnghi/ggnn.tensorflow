public btVector3 getPointInWorld() {
    long cPtr = CollisionJNI.btPointCollector_pointInWorld_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
