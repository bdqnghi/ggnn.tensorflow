public void setImplicitShapeDimensions(btVector3FloatData value) {
    CollisionJNI.btConvexInternalShapeData_implicitShapeDimensions_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
