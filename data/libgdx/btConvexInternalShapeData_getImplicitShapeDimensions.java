public btVector3FloatData getImplicitShapeDimensions() {
    long cPtr = CollisionJNI.btConvexInternalShapeData_implicitShapeDimensions_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
