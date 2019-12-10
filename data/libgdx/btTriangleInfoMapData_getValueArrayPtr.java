public btTriangleInfoData getValueArrayPtr() {
    long cPtr = CollisionJNI.btTriangleInfoMapData_valueArrayPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTriangleInfoData(cPtr, false);
}
