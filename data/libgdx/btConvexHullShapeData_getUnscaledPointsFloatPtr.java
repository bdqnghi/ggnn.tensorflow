public btVector3FloatData getUnscaledPointsFloatPtr() {
    long cPtr = CollisionJNI.btConvexHullShapeData_unscaledPointsFloatPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
