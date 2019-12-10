public btCollisionShapeData getChildShape() {
    long cPtr = CollisionJNI.btCompoundShapeChildData_childShape_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionShapeData(cPtr, false);
}
