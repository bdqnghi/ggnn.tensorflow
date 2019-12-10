public btStridingMeshInterfaceData getMeshInterface() {
    long cPtr = CollisionJNI.btGImpactMeshShapeData_meshInterface_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btStridingMeshInterfaceData(cPtr, false);
}
