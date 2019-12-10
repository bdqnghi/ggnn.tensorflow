public void setCoordinateSystem(int rightIndex, int upIndex, int forwardIndex) {
    DynamicsJNI.btRaycastVehicle_setCoordinateSystem(swigCPtr, this, rightIndex, upIndex, forwardIndex);
}
