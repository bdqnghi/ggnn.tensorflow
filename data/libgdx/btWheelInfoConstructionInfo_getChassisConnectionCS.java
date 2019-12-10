public btVector3 getChassisConnectionCS() {
    long cPtr = DynamicsJNI.btWheelInfoConstructionInfo_chassisConnectionCS_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
