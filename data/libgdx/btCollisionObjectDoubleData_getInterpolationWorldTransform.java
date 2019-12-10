public btTransformDoubleData getInterpolationWorldTransform() {
    long cPtr = CollisionJNI.btCollisionObjectDoubleData_interpolationWorldTransform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformDoubleData(cPtr, false);
}
