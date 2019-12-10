public btVector3DoubleData getUnscaledPointsDoublePtr() {
    long cPtr = CollisionJNI.btConvexHullShapeData_unscaledPointsDoublePtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
