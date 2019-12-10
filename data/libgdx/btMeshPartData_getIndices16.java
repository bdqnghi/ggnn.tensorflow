public btShortIntIndexData getIndices16() {
    long cPtr = CollisionJNI.btMeshPartData_indices16_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btShortIntIndexData(cPtr, false);
}
