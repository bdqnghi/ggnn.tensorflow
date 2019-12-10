public float getSteeringValue(int wheel) {
    return DynamicsJNI.btRaycastVehicle_getSteeringValue(swigCPtr, this, wheel);
}
