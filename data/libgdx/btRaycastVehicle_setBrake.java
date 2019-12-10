public void setBrake(float brake, int wheelIndex) {
    DynamicsJNI.btRaycastVehicle_setBrake(swigCPtr, this, brake, wheelIndex);
}
