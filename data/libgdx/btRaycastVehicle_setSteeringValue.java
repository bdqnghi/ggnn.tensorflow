public void setSteeringValue(float steering, int wheel) {
    DynamicsJNI.btRaycastVehicle_setSteeringValue(swigCPtr, this, steering, wheel);
}
