public btVector3FloatData getInterpolationLinearVelocity() {
    long cPtr = CollisionJNI.btCollisionObjectFloatData_interpolationLinearVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
