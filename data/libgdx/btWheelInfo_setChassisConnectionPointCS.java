public void setChassisConnectionPointCS(btVector3 value) {
    DynamicsJNI.btWheelInfo_chassisConnectionPointCS_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
