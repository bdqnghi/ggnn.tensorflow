public void updateActivationState(btCollisionWorld colWorld, btDispatcher dispatcher) {
    CollisionJNI.btSimulationIslandManager_updateActivationState(swigCPtr, this, btCollisionWorld.getCPtr(colWorld), colWorld, btDispatcher.getCPtr(dispatcher), dispatcher);
}
