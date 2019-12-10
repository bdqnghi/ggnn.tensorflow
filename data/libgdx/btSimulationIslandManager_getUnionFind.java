public btUnionFind getUnionFind() {
    return new btUnionFind(CollisionJNI.btSimulationIslandManager_getUnionFind(swigCPtr, this), false);
}
