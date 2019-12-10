public btVector3DoubleData getBvhAabbMax() {
    long cPtr = CollisionJNI.btQuantizedBvhDoubleData_bvhAabbMax_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
