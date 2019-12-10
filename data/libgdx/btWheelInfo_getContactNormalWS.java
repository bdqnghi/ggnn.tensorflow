public btVector3 getContactNormalWS() {
    long cPtr = DynamicsJNI.btWheelInfo_RaycastInfo_contactNormalWS_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
