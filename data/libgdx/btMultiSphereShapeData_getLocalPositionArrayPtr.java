public btPositionAndRadius getLocalPositionArrayPtr() {
    long cPtr = CollisionJNI.btMultiSphereShapeData_localPositionArrayPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btPositionAndRadius(cPtr, false);
}
