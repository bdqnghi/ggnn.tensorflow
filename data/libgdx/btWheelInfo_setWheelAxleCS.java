public void setWheelAxleCS(btVector3 value) {
    DynamicsJNI.btWheelInfo_wheelAxleCS_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
