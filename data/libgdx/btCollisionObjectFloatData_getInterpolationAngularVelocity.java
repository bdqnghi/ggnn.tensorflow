public btVector3FloatData getInterpolationAngularVelocity() {
    long cPtr = CollisionJNI.btCollisionObjectFloatData_interpolationAngularVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
