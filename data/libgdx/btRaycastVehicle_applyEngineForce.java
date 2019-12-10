public void applyEngineForce(float force, int wheel) {
    DynamicsJNI.btRaycastVehicle_applyEngineForce(swigCPtr, this, force, wheel);
}
