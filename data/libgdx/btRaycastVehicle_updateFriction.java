public void updateFriction(float timeStep) {
    DynamicsJNI.btRaycastVehicle_updateFriction(swigCPtr, this, timeStep);
}
