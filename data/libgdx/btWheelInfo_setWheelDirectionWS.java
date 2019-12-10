public void setWheelDirectionWS(btVector3 value) {
    DynamicsJNI.btWheelInfo_RaycastInfo_wheelDirectionWS_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
