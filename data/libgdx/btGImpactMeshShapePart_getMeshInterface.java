public btStridingMeshInterface getMeshInterface() {
    long cPtr = CollisionJNI.btGImpactMeshShapePart_TrimeshPrimitiveManager_meshInterface_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btStridingMeshInterface(cPtr, false);
}
