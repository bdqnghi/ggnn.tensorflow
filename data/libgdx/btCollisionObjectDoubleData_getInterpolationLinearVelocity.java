public btVector3DoubleData getInterpolationLinearVelocity() {
    long cPtr = CollisionJNI.btCollisionObjectDoubleData_interpolationLinearVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
