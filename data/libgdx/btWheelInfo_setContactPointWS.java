public void setContactPointWS(btVector3 value) {
    DynamicsJNI.btWheelInfo_RaycastInfo_contactPointWS_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
