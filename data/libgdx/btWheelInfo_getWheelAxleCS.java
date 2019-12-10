public btVector3 getWheelAxleCS() {
    long cPtr = DynamicsJNI.btWheelInfo_wheelAxleCS_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
