public void buildAndProcessIslands(btDispatcher dispatcher, btCollisionWorld collisionWorld, btSimulationIslandManager.IslandCallback callback) {
    CollisionJNI.btSimulationIslandManager_buildAndProcessIslands(swigCPtr, this, btDispatcher.getCPtr(dispatcher), dispatcher, btCollisionWorld.getCPtr(collisionWorld), collisionWorld, btSimulationIslandManager.IslandCallback.getCPtr(callback), callback);
}
