public btVector3 getChassisConnectionPointCS() {
    long cPtr = DynamicsJNI.btWheelInfo_chassisConnectionPointCS_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
