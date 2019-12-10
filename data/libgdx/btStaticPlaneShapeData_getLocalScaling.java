public btVector3FloatData getLocalScaling() {
    long cPtr = CollisionJNI.btStaticPlaneShapeData_localScaling_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
