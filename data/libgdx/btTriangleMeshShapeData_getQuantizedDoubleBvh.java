public btQuantizedBvhDoubleData getQuantizedDoubleBvh() {
    long cPtr = CollisionJNI.btTriangleMeshShapeData_quantizedDoubleBvh_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btQuantizedBvhDoubleData(cPtr, false);
}
