public btVector3 getWheelDirectionWS() {
    long cPtr = DynamicsJNI.btWheelInfo_RaycastInfo_wheelDirectionWS_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
