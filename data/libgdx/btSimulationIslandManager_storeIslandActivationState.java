public void storeIslandActivationState(btCollisionWorld world) {
    CollisionJNI.btSimulationIslandManager_storeIslandActivationState(swigCPtr, this, btCollisionWorld.getCPtr(world), world);
}
