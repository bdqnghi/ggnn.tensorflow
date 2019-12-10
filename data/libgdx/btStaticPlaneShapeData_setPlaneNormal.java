public void setPlaneNormal(btVector3FloatData value) {
    CollisionJNI.btStaticPlaneShapeData_planeNormal_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
