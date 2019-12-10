public btVector3 getNormalOnBInWorld() {
    long cPtr = CollisionJNI.btPointCollector_normalOnBInWorld_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
