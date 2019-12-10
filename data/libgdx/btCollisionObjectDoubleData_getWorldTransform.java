public btTransformDoubleData getWorldTransform() {
    long cPtr = CollisionJNI.btCollisionObjectDoubleData_worldTransform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformDoubleData(cPtr, false);
}
