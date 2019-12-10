public btVector3DoubleData getBvhAabbMin() {
    long cPtr = CollisionJNI.btQuantizedBvhDoubleData_bvhAabbMin_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
