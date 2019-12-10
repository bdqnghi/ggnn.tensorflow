public btMeshPartData getMeshPartsPtr() {
    long cPtr = CollisionJNI.btStridingMeshInterfaceData_meshPartsPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btMeshPartData(cPtr, false);
}
