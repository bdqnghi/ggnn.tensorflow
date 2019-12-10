public btTransformFloatData getWorldTransform() {
    long cPtr = CollisionJNI.btCollisionObjectFloatData_worldTransform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformFloatData(cPtr, false);
}
