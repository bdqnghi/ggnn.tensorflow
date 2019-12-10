public void processIsland(SWIGTYPE_p_p_btCollisionObject bodies, int numBodies, SWIGTYPE_p_p_btPersistentManifold manifolds, int numManifolds, int islandId) {
    CollisionJNI.btSimulationIslandManager_IslandCallback_processIsland(swigCPtr, this, SWIGTYPE_p_p_btCollisionObject.getCPtr(bodies), numBodies, SWIGTYPE_p_p_btPersistentManifold.getCPtr(manifolds), numManifolds, islandId);
}
