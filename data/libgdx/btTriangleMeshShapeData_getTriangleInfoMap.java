public btTriangleInfoMapData getTriangleInfoMap() {
    long cPtr = CollisionJNI.btTriangleMeshShapeData_triangleInfoMap_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTriangleInfoMapData(cPtr, false);
}
