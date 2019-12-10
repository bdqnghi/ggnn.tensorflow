public void setLocalScaling(btVector3FloatData value) {
    CollisionJNI.btStaticPlaneShapeData_localScaling_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
