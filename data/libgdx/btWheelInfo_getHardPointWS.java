public btVector3 getHardPointWS() {
    long cPtr = DynamicsJNI.btWheelInfo_RaycastInfo_hardPointWS_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
