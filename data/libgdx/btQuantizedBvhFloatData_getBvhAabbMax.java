public btVector3FloatData getBvhAabbMax() {
    long cPtr = CollisionJNI.btQuantizedBvhFloatData_bvhAabbMax_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
