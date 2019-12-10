public btVector3FloatData getBvhQuantization() {
    long cPtr = CollisionJNI.btQuantizedBvhFloatData_bvhQuantization_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
