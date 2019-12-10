public btWheelInfo.RaycastInfo getRaycastInfo() {
    long cPtr = DynamicsJNI.btWheelInfo_raycastInfo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btWheelInfo.RaycastInfo(cPtr, false);
}
