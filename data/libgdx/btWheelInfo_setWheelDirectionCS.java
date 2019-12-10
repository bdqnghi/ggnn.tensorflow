public void setWheelDirectionCS(btVector3 value) {
    DynamicsJNI.btWheelInfo_wheelDirectionCS_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
