public btTransform getTransform() {
    long cPtr = CollisionJNI.btCompoundShapeChild_transform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
