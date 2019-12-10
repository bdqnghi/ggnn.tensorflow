public btTriangleMeshShapeData getTrimeshShapeData() {
    long cPtr = CollisionJNI.btScaledTriangleMeshShapeData_trimeshShapeData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTriangleMeshShapeData(cPtr, false);
}
