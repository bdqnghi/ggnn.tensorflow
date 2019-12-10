public void setWheelAxleWS(btVector3 value) {
    DynamicsJNI.btWheelInfo_RaycastInfo_wheelAxleWS_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
