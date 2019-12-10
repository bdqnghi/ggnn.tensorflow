public btVector3FloatData getScaling() {
    long cPtr = CollisionJNI.btStridingMeshInterfaceData_scaling_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
