public btVector3DoubleData getBvhQuantization() {
    long cPtr = CollisionJNI.btQuantizedBvhDoubleData_bvhQuantization_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
