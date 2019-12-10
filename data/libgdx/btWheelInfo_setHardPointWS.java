public void setHardPointWS(btVector3 value) {
    DynamicsJNI.btWheelInfo_RaycastInfo_hardPointWS_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
