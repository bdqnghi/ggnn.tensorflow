public btTransformFloatData getInterpolationWorldTransform() {
    long cPtr = CollisionJNI.btCollisionObjectFloatData_interpolationWorldTransform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformFloatData(cPtr, false);
}
