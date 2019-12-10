public void updateVehicles(float timeStep) {
    DynamicsJNI.btDiscreteDynamicsWorld_updateVehicles(swigCPtr, this, timeStep);
}
