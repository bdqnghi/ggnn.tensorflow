public btVector3 getContactPointWS() {
    long cPtr = DynamicsJNI.btWheelInfo_RaycastInfo_contactPointWS_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
