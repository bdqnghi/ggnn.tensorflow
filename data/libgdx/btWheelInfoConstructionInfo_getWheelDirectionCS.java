public btVector3 getWheelDirectionCS() {
    long cPtr = DynamicsJNI.btWheelInfoConstructionInfo_wheelDirectionCS_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
