public btVector3FloatData getBvhAabbMin() {
    long cPtr = CollisionJNI.btQuantizedBvhFloatData_bvhAabbMin_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
