public btVector3FloatData getLocalScaling() {
    long cPtr = CollisionJNI.btConvexInternalShapeData_localScaling_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
