public btVector3FloatData getPlaneNormal() {
    long cPtr = CollisionJNI.btStaticPlaneShapeData_planeNormal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
