public btTransformFloatData getTransform() {
    long cPtr = CollisionJNI.btCompoundShapeChildData_transform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformFloatData(cPtr, false);
}
