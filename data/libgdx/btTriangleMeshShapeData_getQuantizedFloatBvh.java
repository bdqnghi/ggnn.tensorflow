public btQuantizedBvhFloatData getQuantizedFloatBvh() {
    long cPtr = CollisionJNI.btTriangleMeshShapeData_quantizedFloatBvh_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btQuantizedBvhFloatData(cPtr, false);
}
