public void buildIslands(btDispatcher dispatcher, btCollisionWorld colWorld) {
    CollisionJNI.btSimulationIslandManager_buildIslands(swigCPtr, this, btDispatcher.getCPtr(dispatcher), dispatcher, btCollisionWorld.getCPtr(colWorld), colWorld);
}
