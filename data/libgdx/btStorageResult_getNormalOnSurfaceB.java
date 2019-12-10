public btVector3 getNormalOnSurfaceB() {
    long cPtr = CollisionJNI.btStorageResult_normalOnSurfaceB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
