public btIntIndexData getIndices32() {
    long cPtr = CollisionJNI.btMeshPartData_indices32_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btIntIndexData(cPtr, false);
}
