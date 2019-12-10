public btWheelInfo getWheelInfo(int index) {
    return new btWheelInfo(DynamicsJNI.btRaycastVehicle_getWheelInfo__SWIG_0(swigCPtr, this, index), false);
}
