public void findUnions(btDispatcher dispatcher, btCollisionWorld colWorld) {
    CollisionJNI.btSimulationIslandManager_findUnions(swigCPtr, this, btDispatcher.getCPtr(dispatcher), dispatcher, btCollisionWorld.getCPtr(colWorld), colWorld);
}
