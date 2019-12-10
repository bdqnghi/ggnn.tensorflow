public void setContactNormalWS(btVector3 value) {
    DynamicsJNI.btWheelInfo_RaycastInfo_contactNormalWS_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
