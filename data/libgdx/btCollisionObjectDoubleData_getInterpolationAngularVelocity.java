public btVector3DoubleData getInterpolationAngularVelocity() {
    long cPtr = CollisionJNI.btCollisionObjectDoubleData_interpolationAngularVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
